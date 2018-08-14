//
// Created on 8/14/18.
//

#include "list_node.h"

// Why this code do not work???
//void merge_two_list(ListNode* p_MergeList, ListNode* new_list_1, ListNode* new_list_2) {
//    if (p_MergeList == nullptr)
//        return;
//
//    if (new_list_1->m_nValue <= new_list_2->m_nValue) {
//        p_MergeList = new_list_1;
//        std::cout << "p_MergeList->value1:" << p_MergeList->m_nValue << std::endl;
//
//        merge_two_list(p_MergeList->m_pNext, new_list_1->m_pNext, new_list_2);
//    }
//    if (new_list_1->m_nValue > new_list_2->m_nValue) {
//        p_MergeList = new_list_2;
//        std::cout << "p_MergeList->value2:" << p_MergeList->m_nValue << std::endl;
//
//        merge_two_list(p_MergeList->m_pNext, new_list_1, new_list_2->m_pNext);
//    }
//}

ListNode* merge_two_list(ListNode* new_list_1, ListNode* new_list_2) {
    if (new_list_1 == nullptr)
        return new_list_2;
    if (new_list_2 == nullptr)
        return new_list_1;

    ListNode* p_MergeList = nullptr;

    if (new_list_1->m_nValue <= new_list_2->m_nValue) {
        p_MergeList = new_list_1;
        std::cout << "p_MergeList->value1:" << p_MergeList->m_nValue << std::endl;

        p_MergeList->m_pNext = merge_two_list(new_list_1->m_pNext, new_list_2);
    }
    if (new_list_1->m_nValue > new_list_2->m_nValue) {
        p_MergeList = new_list_2;
        std::cout << "p_MergeList->value2:" << p_MergeList->m_nValue << std::endl;

        p_MergeList->m_pNext = merge_two_list(new_list_1, new_list_2->m_pNext);
    }
    return p_MergeList;
}

int main() {

    LinkedList linkedList;

    ListNode* p_Head1 = new ListNode();
    p_Head1->m_nValue = 1;

    ListNode* new_list_1;
    new_list_1 = linkedList.creat_node(p_Head1, 1);
    new_list_1 = linkedList.creat_node(new_list_1, 3);
    new_list_1 = linkedList.creat_node(new_list_1, 5);
    new_list_1 = linkedList.creat_node(new_list_1, 7);
    linkedList.show_listnode(p_Head1);

    std::cout << "_____________" << std::endl;

    ListNode* p_Head2 = new ListNode();
    p_Head2->m_nValue = 1;

    ListNode* new_list_2;
    new_list_2 = linkedList.creat_node(p_Head2, 2);
    new_list_2 = linkedList.creat_node(new_list_2, 4);
    new_list_2 = linkedList.creat_node(new_list_2, 6);
    new_list_2 = linkedList.creat_node(new_list_2, 8);
    linkedList.show_listnode(p_Head2);

    ListNode* p_MergeList;

    p_MergeList = merge_two_list(p_Head1, p_Head2);

    std::cout << "_____________" << std::endl;

    linkedList.show_listnode(p_MergeList);

    return 0;
}
