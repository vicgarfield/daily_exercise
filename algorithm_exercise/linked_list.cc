//
// Created by Victor Yue on 2018/7/25.
//

// 1. add node to the end of linked-list

#include <iostream>

struct ListNode {
    int m_nValue;
    ListNode* m_pNext;
};

void add_to_tail(ListNode** p_header, int value) { // Why is **???

    ListNode* p_new_node = new ListNode();
    p_new_node->m_nValue = value;
    p_new_node->m_pNext = nullptr;

    if (*p_header == nullptr) {
        *p_header = p_new_node;
    }
    else {
        ListNode* p_hold = *p_header;
        while (p_hold->m_pNext != nullptr) {
            p_hold = p_hold->m_pNext;
        }
        p_hold->m_pNext = p_new_node;
    }
}

int main(int argc, char* argv[]) {

//    ListNode* listnode1;
//    ListNode* listnode2;  // Why is not OK ?

    ListNode* listnode1 = new ListNode();
    ListNode* listnode2 = new ListNode();

    listnode1->m_nValue = 1;
    listnode2->m_nValue = 2;
    listnode1->m_pNext = listnode2;

    add_to_tail(&listnode1, 3);

    ListNode* p_hold;
    p_hold = listnode1;

    while(p_hold->m_pNext != nullptr) {
        p_hold = p_hold->m_pNext;
    }
    std::cout << "Tail number is " << p_hold->m_nValue << std::endl;

    std::cout << "Done!" << std::endl;
}