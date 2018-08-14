//
// Created on 8/14/18.
//

#ifndef TEST_BINARY_TREE_H
#define TEST_BINARY_TREE_H

#include <iostream>

struct BinaryTreeNode {
    int m_nValue;
    BinaryTreeNode* m_pLeft;
    BinaryTreeNode* m_pRight;
};

class BinaryTree {
public:
    BinaryTree() = default;
    ~BinaryTree() = default;

    void creat_binarytree(BinaryTreeNode* p_Root);
    void DLR_binarytree(BinaryTreeNode* p_Root);
    void LDR_binarytree(BinaryTreeNode* p_Root);
};

#endif //TEST_BINARY_TREE_H
