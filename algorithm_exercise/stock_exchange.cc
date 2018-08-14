//
// Created on 8/13/18.
//

#include <iostream>

int get_maxdiff(const int* arr, const int length) {
    int min = (arr[0] < arr[1]) ? arr[0] : arr[1];
    int max_diff = arr[1] - arr[0];

    for (int i=2; i<length; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
        else if (arr[i] - min > max_diff) {
            max_diff = arr[i] - min;
        }
    }
    return max_diff;
}

int main() {
    int length = 10;
    int arr[length] = {3,6,5,7,10,6,9,12,2,7};

    std::cout << get_maxdiff(arr, length) << std::endl;

    return 0;
}