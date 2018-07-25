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

// Delete first note whose value is designated.
void delete_chosen_node(ListNode** p_header, int value) {
    if (p_header == nullptr || *p_header == nullptr) {
        std::cout << "[error] function delete_chosen_node parameter p_header is nullptr" << std::endl;
        exit(1);
    }

    ListNode* p_tobedeleted = nullptr;
    if ((*p_header)->m_nValue == value) {
        p_tobedeleted = *p_header;
        *p_header = (*p_header)->m_pNext;
    }
    else {
        ListNode* p_holder = *p_header;
        while(p_holder->m_pNext != nullptr && p_holder->m_pNext->m_nValue != value) {
            p_holder = p_holder->m_pNext;
        }
        if (p_holder->m_pNext != nullptr && p_holder->m_pNext->m_nValue == value) {
            p_tobedeleted = p_holder->m_pNext;
            p_holder->m_pNext = p_holder->m_pNext->m_pNext;
        }
    }

    if (p_tobedeleted != nullptr) {
        delete p_tobedeleted;
        p_tobedeleted = nullptr;
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

    ListNode* p_hold1;
    p_hold1 = listnode1;

    while(p_hold1->m_pNext != nullptr) {
        p_hold1 = p_hold1->m_pNext;
    }
    std::cout << "Tail number is " << p_hold1->m_nValue << std::endl;

    delete_chosen_node(&listnode1, 2);

    ListNode* p_hold2;
    p_hold2 = listnode1;
    while(p_hold2 != nullptr) {
        std::cout << "node value: " << p_hold2->m_nValue << std::endl;
        p_hold2 = p_hold2->m_pNext;
    }

    std::cout << "Done!" << std::endl;
}