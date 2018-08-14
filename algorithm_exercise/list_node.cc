//
// Created on 8/14/18.
//

#include "list_node.h"

ListNode* LinkedList::creat_node(ListNode* listnode, int value) {
    ListNode* eleNode = new ListNode();

    listnode->m_pNext = eleNode;
    listnode->m_pNext->m_nValue = value;

    return eleNode;
}

void LinkedList::show_listnode(ListNode* p_Head) {
    ListNode* eleNode;
    eleNode = p_Head;
    while (eleNode != nullptr) {
        std::cout << "node_value:" << eleNode->m_nValue << std::endl;
        eleNode = eleNode->m_pNext;
    }
}

void LinkedList::reverse_listnode(ListNode* p_Head) {
    ListNode* eleNode;
    static ListNode* temp_Head = p_Head;
    eleNode = temp_Head;

    while (eleNode->m_pNext->m_pNext != nullptr) {
        eleNode = eleNode->m_pNext;
    }

    eleNode->m_pNext->m_pNext = eleNode;
    eleNode->m_pNext = nullptr;
    if (eleNode == temp_Head) {
        return;
    }
    reverse_listnode(eleNode);
}