//
// Created on 8/18/18.
//

#include <iostream>

void print_arr(int* arr, const int len) {
    for (int i=0; i<len; i++) {
        std::cout << arr[i] << ", ";
    }
    std::cout << std::endl;
}

void swap(int& a, int& b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void bubble_sort(int* arr, const int len) {
    for (int j=0; j<len-2; j++) {
        for (int i = 0; i < len - 1 -j; i++) {
            if (arr[i] > arr[i + 1])
                swap(arr[i], arr[i + 1]);
        }
    }
}

int main() {
    int len = 10;
    int arr[10] = {3,4,6,8,7,1,0,5,2,9};
//    int arr[10] = {2,3,43,4,5,5,56,6,6,7};

    bubble_sort(arr, len);

    print_arr(arr, len);
}