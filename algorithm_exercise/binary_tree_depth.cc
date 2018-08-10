//
// Created by Victor Yue on 2018/8/10.
//

#include <iostream>

struct BinaryTreeNode {
    int m_nValue;
    BinaryTreeNode* m_pLeft;
    BinaryTreeNode* m_pRight;
};

void creat_binarytree(BinaryTreeNode* p_Root) {
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
}

int DLR_binarytree(BinaryTreeNode* p_Root) {
    if (p_Root == nullptr) {
        return 0;
    }

    int left_depth = DLR_binarytree(p_Root->m_pLeft);
    int right_depth = DLR_binarytree(p_Root->m_pRight);

    return (left_depth > right_depth) ? (++left_depth): (++right_depth);
}

int main() {

    BinaryTreeNode* p_root = new BinaryTreeNode();

    creat_binarytree(p_root);

    std::cout << "tree_depth: " << DLR_binarytree(p_root) << std::endl;

    std::cout << "Done!" << std::endl;
    return 0;
}
