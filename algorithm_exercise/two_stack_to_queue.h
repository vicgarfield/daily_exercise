//
// Created by my on 2018/7/26.
//

#include <iostream>
#include <stack>

template <typename T>
class CQueue {
public:
    void appendTail(const T& node);
    T deleteHead();

private:
    std::stack<T> stack1;
    std::stack<T> stack2;
};

template <typename T>
void CQueue<T>::appendTail(const T &node) {
    stack1.push(node);
}

template <typename T>
T CQueue<T>::deleteHead() {
    if (stack2.size() <= 0) {
        while (stack1.size() > 0) {
            T& data = stack1.top();
            stack1.pop();
            stack2.push(data);
        }
    }
    if (stack2.size() == 0) {
        std::cout << "[Error] queue is empty!" << std::endl;
        exit(1);
    }

    T head = stack2.top();
    stack2.pop();

    return head;
}