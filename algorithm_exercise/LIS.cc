//
// Created on 8/17/18.
//

#include <iostream>
#include <vector>

//int bi_search(std::vector<int> list, const int num) {
//    int len = list.size();
//    int temp = len/2;
//    while(!(list[temp] < num && list[temp + 1] >= num)) {
//        if (list[temp] > num) {
//           temp /= 2;
//        }
//        else {
//            if (temp == 1)
//                temp +=1;
//            else
//                temp += temp/2;
//        }
//        if (temp >= len || temp == 0)
//            break;
//    }
//    std::cout << "temp:" << temp << std::endl;
//    return 0;
//}

void find_LIS(int* arr, int len) {
    if (arr == nullptr)
        return;
    std::vector<int> min_list;
    min_list.push_back(arr[0]);
    for (int i=1; i<len; i++) {
        for (int j=0; j<min_list.size(); j++) {  // TODO:用二分查找会再快一些
            if (arr[i] <= min_list[j]) {
                min_list[j] = arr[i];
                break;
            }
            if (j == min_list.size() - 1) {
                min_list.push_back(arr[i]);
                break;
            }
        }
    }

    for (int k=0; k<min_list.size(); k++) {
        std::cout << min_list[k] << ", ";
    }
    std::cout << std::endl;
}

int main() {

    int len = 10;
    int arr[10] = {1,8,6,7,3,2,5,4,9,5};
//    int arr[len] = {1,1,1,1};
    find_LIS(arr, len);

    return 0;
}