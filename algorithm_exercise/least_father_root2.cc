//
// Created by yhx on 8/11/18.
//

#include <iostream>
#include <stack>

#include "binary_tree.h"

bool get_road_stack(BinaryTreeNode* p_root, int value, std::stack<int>* road_stack) {
//    if (p_root == nullptr) {
//        road_stack->pop();
//        return ;
//    }
    bool found = false;
    road_stack->push(p_root->m_nValue);

    if (p_root->m_nValue == value) {
        return true;
    }

    if (p_root->m_pLeft != nullptr) {
        found = get_road_stack(p_root->m_pLeft, value, road_stack);
    }
    if (p_root->m_pRight != nullptr && !found) {
        found = get_road_stack(p_root->m_pRight, value, road_stack);
    }

    if (!found)
        road_stack->pop();
    return found;
}

int get_least_father_root(BinaryTreeNode* p_root, int a, int b) {
    std::stack<int>* road_stack_a = new std::stack<int>;
    std::stack<int>* road_stack_b = new std::stack<int>;
    get_road_stack(p_root, a, road_stack_a);
    get_road_stack(p_root, b, road_stack_b);

//    while (!road_stack_a->empty()) {
//        std::cout << road_stack_a->top();
//        std::cout << ", ";
//        road_stack_a->pop();
//    }
//    std::cout << "-----------" << std::endl;
//    while (!road_stack_b->empty()) {
//        std::cout << road_stack_b->top();
//        std::cout << ", ";
//        road_stack_b->pop();
//    }
//
//    exit(0);
    while (road_stack_a->size() > road_stack_b->size()) {
        road_stack_a->pop();
    }

    while (road_stack_b->size() > road_stack_a->size()) {
        road_stack_b->pop();
    }

    while (road_stack_a->top() != road_stack_b->top()) {
        road_stack_a->pop();
        road_stack_b->pop();
    }

    return road_stack_a->top();
}

int main() {

    BinaryTree binaryTree;

    BinaryTreeNode* p_root = new BinaryTreeNode();

    binaryTree.creat_binarytree(p_root);

    int result = get_least_father_root(p_root, 6, 9);

    std::cout << "result: " << result << std::endl;

    return 0;
}