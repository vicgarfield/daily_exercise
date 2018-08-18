//
// Created on 8/11/18.
//

#include <iostream>

bool find_two_sum(int arr[], int sum, int& begin, int& end) {
    while(arr[begin] + arr[end] != sum && begin < end) {
        if (arr[begin] + arr[end] > sum) {
            end--;
        }
        else {
            begin++;
        }
    }

    if (begin != end) {
        return true;
    } else
        return false;
}

int main() {

    int arr[10] = {1,2,4,6,7,8,13,14,15,19};

    int sum = 19;
    int begin = 0;
    int end = 9;
    bool is_sum = false;

    is_sum = find_two_sum(arr, sum, begin, end);

    std::cout << "is_sum:" << is_sum << std::endl;
    std::cout << "begin:" << begin << ", end:" << end << std::endl;

}
