//
// Created on 2018/8/20.
//

#include <iostream>

int max_sub_array_sum(int arr[], int n) {
    int sum=0, max_sum=0;
    for (int i=0; i<n; i++) {
        sum += arr[i];
        if (sum > max_sum) {
            max_sum = sum;
        }
        if (sum < 0)
            sum = 0;
    }

    return max_sum;
}

int main() {
    int arr[10] = {5,-3,-6,8,3,1,-4,7,-9,5};

    int sum = max_sub_array_sum(arr, 10);

    std::cout << "arr_sum:" << sum << std::endl;
}