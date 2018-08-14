//
// Created on 8/14/18.
//

#include "binary_tree.h"

void swap_btreenode(BinaryTreeNode* p_btreenode) {
    BinaryTreeNode* temp_node;
    temp_node = p_btreenode->m_pLeft;
    p_btreenode->m_pLeft = p_btreenode->m_pRight;
    p_btreenode->m_pRight = temp_node;
}

void mirror_btree(BinaryTreeNode* p_Root) {
    if (p_Root == nullptr)
        return;
    if (p_Root->m_pLeft != nullptr && p_Root->m_pRight != nullptr) {
        swap_btreenode(p_Root);
        mirror_btree(p_Root->m_pLeft);
        mirror_btree(p_Root->m_pRight);
    }
}

int main() {

    BinaryTree binaryTree;

    BinaryTreeNode* p_Root = new BinaryTreeNode();

    binaryTree.creat_binarytree(p_Root);

    mirror_btree(p_Root);

    binaryTree.DLR_binarytree(p_Root);
    std::cout << "________________________" << std::endl;
    binaryTree.LDR_binarytree(p_Root);

    return 0;
}
