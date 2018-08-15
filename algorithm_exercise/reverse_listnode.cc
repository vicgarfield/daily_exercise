//
//
//

#include "list_node.h"

int main() {

    LinkedList linkedList;

    ListNode* p_Head = new ListNode();
    p_Head->m_nValue = 0;

    ListNode* new_list;
    new_list = linkedList.creat_node(p_Head, 1);
    new_list = linkedList.creat_node(new_list, 2);
    new_list = linkedList.creat_node(new_list, 3);
    new_list = linkedList.creat_node(new_list, 4);

    linkedList.show_listnode(p_Head);

//    linkedList.reverse_listnode(p_Head);
    linkedList.reverse_listnode2(p_Head);
    linkedList.show_listnode(new_list);

    std::cout << "Down!" << std::endl;
}