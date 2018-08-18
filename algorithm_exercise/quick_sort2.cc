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

void quick_sort(int* arr, int left, int right) {
    if (arr == nullptr || left > right)
        return;

    int mid = arr[left];
    int i = left;
    int j = right;

    while (i < j) {
        while (arr[i] < mid && i < j) {
            i++;
        }
        while (arr[j] > mid && i < j) {
            j--;
        }
        swap(arr[i], arr[j]);
    }
//    swap(arr[i], mid);

    quick_sort(arr, left, j-1);
    quick_sort(arr, j+1, right);
}

int main() {
    int len = 10;
    int arr[10] = {3,9,6,8,7,1,0,5,2,4};

    quick_sort(arr, 0, 9);

    print_arr(arr, len);
}

