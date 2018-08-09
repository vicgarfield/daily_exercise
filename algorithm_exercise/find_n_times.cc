//
// Created by Victor Yue on 2018/8/9.
//
// Note: 给定一个已排序数组arr，并给定一个数n，求n在数组中出现的次数.

#include <iostream>

int find_left_n(int* arr, int begin, int end, int n) {
    if (arr == nullptr || begin > end)
        return 0;

    int half_idx = (end + begin) / 2;

    int half_num = arr[half_idx];

    int sum = 0;

    if (half_num > n) {
        end = half_idx - 1;
        sum += find_left_n(arr, begin, end, n);
//        std::cout << "sum1:" << sum << std::endl;
        return sum;
    }
    else if (half_num < n) {
        begin = half_idx + 1;
        sum += find_left_n(arr, begin, end, n);
//        std::cout << "sum2:" << sum << std::endl;
        return sum;
    }
    else {
        sum++;
        int temp_half_idx = half_idx;
        while(half_idx > begin && arr[--temp_half_idx] == n) {
            sum++;
        }
        temp_half_idx = half_idx;
        while(half_idx < end && arr[++temp_half_idx] == n) {
            sum++;
        }
//        std::cout << "sum3:" << sum << std::endl;
        return sum;
    }
}

int main(int argc, char** argv) {

    int arr[10] = {1,2,3,3,3,3,5,7,8,8};

    int result;

    for (int n=0; n<10; n++) {
        result = find_left_n(arr, 0, 9, n);
        std::cout << "n:" << n << ", result:" << result << std::endl;
    }

    std::cout << "Done!" << std::endl;
}

