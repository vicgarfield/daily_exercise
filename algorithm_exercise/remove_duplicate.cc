//
// Created on 8/22/18.
//

#include <iostream>

void print_arr(int arr[], int len) {
    for (int i=0; i<len; i++)
        std::cout << arr[i] << ", ";
    std::cout << std::endl;
}

void remove_duplicate(int arr[], int& ori_len, int& out_len) {
    int k = 0;
    for (int i=1; i<ori_len; i++) {
        if (arr[k] != arr[i])
            arr[++k] = arr[i];

    }
    out_len = k + 1;
}

int main() {

    int ori_len = 10;

    int out_len;

    int arr[ori_len] = {1,2,2,3,4,4,4,5,6,6};

    remove_duplicate(arr, ori_len, out_len);

    print_arr(arr, out_len);

    return 0;
}