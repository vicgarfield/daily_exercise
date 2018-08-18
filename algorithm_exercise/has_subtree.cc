//
// Created on 8/18/18.
//

#include "binary_tree.h"

bool dose_tree1hastree2(BinaryTreeNode* p_Root1, BinaryTreeNode* p_Root2) {
    if (p_Root2 == nullptr) {
        return true;
    }
    if (p_Root1 == nullptr)
        return false;

    if (p_Root1->m_nValue != p_Root2->m_nValue)
        return false;

    return dose_tree1hastree2(p_Root1->m_pLeft, p_Root2->m_pLeft)
            && dose_tree1hastree2(p_Root1->m_pRight, p_Root2->m_pRight);
}

bool has_subtree(BinaryTreeNode* p_Root1, BinaryTreeNode* p_Root2) {

    bool result = false;

    if (p_Root1 != nullptr && p_Root2 != nullptr) {
        if (p_Root1->m_nValue == p_Root2->m_nValue)
            result = dose_tree1hastree2(p_Root1, p_Root2);
        if (!result)
            result = has_subtree(p_Root1->m_pLeft, p_Root2);
        if (!result)
            result = has_subtree(p_Root1->m_pRight, p_Root2);
    }

    return result;
}

int main() {

    BinaryTree binaryTree;

    BinaryTreeNode* p_Root_main = new BinaryTreeNode();
    BinaryTreeNode* p_Root_cmp = new BinaryTreeNode();

    binaryTree.creat_binarytree(p_Root_main);

    p_Root_cmp->m_nValue = 3;
    p_Root_cmp->m_pLeft = new BinaryTreeNode();
    p_Root_cmp->m_pLeft->m_nValue = 6;
    p_Root_cmp->m_pRight = new BinaryTreeNode();
    p_Root_cmp->m_pRight->m_nValue = 7;

    bool result = has_subtree(p_Root_main, p_Root_cmp);

    std::cout << "has_subtree: " << result << std::endl;

    return 0;
}