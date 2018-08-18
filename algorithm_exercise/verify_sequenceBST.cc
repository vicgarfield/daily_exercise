//
// Created on 2018/8/18.
//

#include <iostream>

bool verify_sequenceBST(int arr[], int left, int right) {
    if (arr == nullptr)
        return false;

    int root = arr[right];
    int i = left;
    for(; i < right; i++) {
        if (arr[i] > root)
            break;
    }
    int j = i;
    for(; j< right-1; j++) {
        if (arr[j] < root)
            return false;
    }

    bool b_left = true, b_right = true;
    std::cout << "left:" << left << ", right:" << right << std::endl;
    std::cout << "i:" << i << ", j:" << j << std::endl;
    if (i > left)
        b_left = verify_sequenceBST(arr, left, i-1);
    if (j < right)
        b_right = verify_sequenceBST(arr, i, right-1);

    return (b_left && b_right);
}

int main() {

    int arr[7] = {5, 7, 6, 9, 11, 10, 8};

    bool result = verify_sequenceBST(arr, 0, 6);

    std::cout << "result:" << result << std::endl;

    return 0;
}
