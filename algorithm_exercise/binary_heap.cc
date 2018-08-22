//
// Created on 8/22/18.
//

#include <iostream>

void print_arr(int arr[], int len) {
    for (int i=0; i<len; i++)
        std::cout << arr[i] << ", ";
    std::cout << std::endl;
}

void adjust_heap(int arr[], int len, int i) {

    int left = 2 * i + 1;
    int right = 2 * i + 2;

    int min = i;

    if (left < len && arr[min] > arr[left])
        min = left;
    if (right < len && arr[min] > arr[right])
        min = right;

    if (min != i) {
        int temp;
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;

        adjust_heap(arr, len, min);
    }
}

int build_heap(int arr[], int len) {
    for (int i=len/2-1; i>=0; i--)
        adjust_heap(arr, len, i);
}

int find_top_k(int arr[], int len, int k) {
    int top_k[k];

    for (int i=0; i<k; i++)
        top_k[i] = arr[i];

    build_heap(top_k, k);

    for (int i=k; i<len; i++) {
        if (arr[i] <= top_k[0])
            continue;
        top_k[0] = arr[i];
        adjust_heap(top_k, k, 0);
    }

    print_arr(top_k, 5);

    return top_k[0];
}

int main() {
    int arr[10] = {6,7,4,2,1,9,0,8,3,5};
    int len = 10;

//    build_heap(arr, 10);

    int top_k = find_top_k(arr, 10, 5);

    std::cout << "top_k: " << top_k << std::endl;

    print_arr(arr, 10);
}
