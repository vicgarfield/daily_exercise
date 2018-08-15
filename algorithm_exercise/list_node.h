//
// Created on 8/14/18.
//

#ifndef TEST_LIST_NODE_H
#define TEST_LIST_NODE_H

#include <iostream>

struct ListNode {
    int m_nValue;
    ListNode* m_pNext;
};

class LinkedList {
public:
    ListNode* creat_node(ListNode* listnode, int value);

    void show_listnode(ListNode* p_Head);

    void reverse_listnode(ListNode* p_Head);
    ListNode* reverse_listnode2(ListNode* p_Head);

};

#endif //TEST_LIST_NODE_H
