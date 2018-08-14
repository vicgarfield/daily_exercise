//
// Created by yhx on 8/14/18.
//

#include "binary_tree.h"

void BinaryTree::creat_binarytree(BinaryTreeNode* p_Root) {
    //
    //                 1
    //              2     3
    //            4   5  6  7
    //                       8
    //                        9
    //
    //
    //
    p_Root->m_nValue = 1;

    p_Root->m_pLeft = new BinaryTreeNode();
    p_Root->m_pLeft->m_nValue = 2;
    p_Root->m_pRight = new BinaryTreeNode();
    p_Root->m_pRight->m_nValue = 3;

    p_Root->m_pLeft->m_pLeft = new BinaryTreeNode();
    p_Root->m_pLeft->m_pLeft->m_nValue = 4;
    p_Root->m_pLeft->m_pRight = new BinaryTreeNode();
    p_Root->m_pLeft->m_pRight->m_nValue = 5;

    p_Root->m_pRight->m_pLeft = new BinaryTreeNode();
    p_Root->m_pRight->m_pLeft->m_nValue = 6;
    p_Root->m_pRight->m_pRight = new BinaryTreeNode();
    p_Root->m_pRight->m_pRight->m_nValue = 7;

    p_Root->m_pRight->m_pRight->m_pRight = new BinaryTreeNode();
    p_Root->m_pRight->m_pRight->m_pRight->m_nValue = 8;

    p_Root->m_pRight->m_pRight->m_pRight->m_pRight = new BinaryTreeNode();
    p_Root->m_pRight->m_pRight->m_pRight->m_pRight->m_nValue = 9;
}

void BinaryTree::DLR_binarytree(BinaryTreeNode* p_Root) {
    std::cout << "BinaryTreeNode->value:" << p_Root->m_nValue << std::endl;
    if (p_Root->m_pLeft != nullptr) {
        DLR_binarytree(p_Root->m_pLeft);
    }
    if (p_Root->m_pRight != nullptr) {
        DLR_binarytree(p_Root->m_pRight);
    }
}

void BinaryTree::LDR_binarytree(BinaryTreeNode* p_Root) {
    if (p_Root->m_pLeft != nullptr) {
        LDR_binarytree(p_Root->m_pLeft);
    }
    std::cout << "BinaryTreeNode->value:" << p_Root->m_nValue << std::endl;
    if (p_Root->m_pRight != nullptr) {
        LDR_binarytree(p_Root->m_pRight);
    }
}