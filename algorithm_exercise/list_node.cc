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

ListNode* LinkedList::reverse_listnode2(ListNode* p_Head) {

    ListNode* p_Node = p_Head;
    ListNode* p_Pre = nullptr;
    ListNode* p_Next = nullptr;
    ListNode* p_ReveredHead = nullptr;

    while (p_Node != nullptr) {
        p_Next = p_Node->m_pNext;

        if (p_Next == nullptr)
            p_ReveredHead = p_Node;

        p_Node->m_pNext = p_Pre;
        p_Pre = p_Node;
        p_Node = p_Next;
    }
    return p_ReveredHead;
}