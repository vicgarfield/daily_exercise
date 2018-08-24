//
// Created on 2018/8/24.
//

#include <iostream>

int rotate_list_min(int arr[], int len) {
    int left = 0;
    int right = len - 1;
    int mid = len / 2;

    while (left != mid && mid != right) {
        if (arr[left] <= arr[mid] && arr[mid] >= arr[right]) {
            left = mid;
        }
        else if (arr[left] >= arr[mid] && arr[mid] <= arr[right]) {
            right = mid;
        }

        if (arr[left] == arr[mid] && arr[mid] == arr[right]) {
            int min = arr[left];
            for(int i=0; i<len; i++) {
                if (arr[i] < min)
                    min = arr[i];
            }
            return min;
        }
        mid = (left + right)/ 2;

//        std::cout << "mid:" << mid << std::endl;
//        std::cout << "left:" << left << std::endl;
//        std::cout << "right:" << right << std::endl;
    }
    return arr[right];
}

int main() {
    int arr[10] = {5,6,7,8,9,0,1,2,3,4};
//    int arr[5] = {1,0,1,1,1};

    int min = rotate_list_min(arr, 10);

    std::cout << "min: " << min << std::endl;

    return 0;
}