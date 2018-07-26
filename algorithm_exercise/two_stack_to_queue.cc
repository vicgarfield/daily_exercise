//
// Created by my on 2018/7/26.
//

#include <iostream>
#include <stack>

#include "two_stack_to_queue.h"

int main(int argc, char* argv[]) {

    CQueue<int> cQueue;

    for (int i=0;i<10;i++)
        cQueue.appendTail(i);

    for (int j=0;j<10;j++)
        std::cout << cQueue.deleteHead() << ", ";
    std::cout << std::endl;

    std::cout << "Done!" << std::endl;
}
