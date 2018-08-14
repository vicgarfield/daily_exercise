//
// Created by yhx on 8/11/18.
//

#include <iostream>
#include <stack>

#include "binary_tree.h"

struct ListNode {
    int m_nValue;
    ListNode* m_pNext;
};

void get_list_from_value(BinaryTreeNode* p_Root, const int value, std::stack<int>* stack) {

    if (p_Root == nullptr || p_Root->m_nValue == value) {
        if (!stack->empty()) {
            std::cout << "!!list_value:" << stack->top() << std::endl;
            stack->pop();
        }
        return;
    }


    stack->push(p_Root->m_nValue);
    std::cout << stack->top();
    get_list_from_value(p_Root->m_pLeft, value, stack);
    get_list_from_value(p_Root->m_pRight, value, stack);
}

void get_least_father_root(BinaryTreeNode* p_Root, int m, int n) {
    if (p_Root == nullptr) {
        return;
    }
}

int main() {

    BinaryTree binaryTree;

    BinaryTreeNode* p_root = new BinaryTreeNode();
    ListNode* p_Head = new ListNode();
    int m = 6;
    int n = 9;

    static std::stack<int>* list = new std::stack<int>();

    binaryTree.creat_binarytree(p_root);

    get_list_from_value(p_root, m, list);

    std::cout << "list:" << list->top() << std::endl;

    get_least_father_root(p_root, m, n);

    return 0;
}