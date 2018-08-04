//
// Created by Victor Yue on 2018/8/4.
//

#include <iostream>

struct ListNode {
    int m_nValue;
    ListNode* m_pNext;
};

ListNode* creat_node(ListNode* listnode, int value) {
    ListNode* eleNode = new ListNode();

    listnode->m_pNext = eleNode;
    listnode->m_pNext->m_nValue = value;

    return eleNode;
}

void show_listnode(ListNode* p_Head) {
    ListNode* eleNode;
    eleNode = p_Head;
    while (eleNode != nullptr) {
        std::cout << "node_value:" << eleNode->m_nValue << std::endl;
        eleNode = eleNode->m_pNext;
    }
}

void reverse_listnode(ListNode* p_Head) {
    ListNode* eleNode;
    static ListNode* temp_Head = p_Head;
    p_Head = temp_Head;
    eleNode = p_Head;

    while (eleNode->m_pNext->m_pNext != nullptr) {
        eleNode = eleNode->m_pNext;
    }

    eleNode->m_pNext->m_pNext = eleNode;
    eleNode->m_pNext = nullptr;
    if (eleNode == p_Head) {
        return;
    }
    reverse_listnode(eleNode);
}

int main() {

    ListNode* p_Head = new ListNode();
    p_Head->m_nValue = 0;

    ListNode* new_list;
    new_list = creat_node(p_Head, 1);
    new_list = creat_node(new_list, 2);
    new_list = creat_node(new_list, 3);
    new_list = creat_node(new_list, 4);

    show_listnode(p_Head);

    reverse_listnode(p_Head);
    std::cout << "____________" << std::endl;
    show_listnode(new_list);

    std::cout << "Down!" << std::endl;
}
