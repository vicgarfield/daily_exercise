//
// Created on 8/11/18.
//

#include <iostream>
#include <vector>

bool find_two_sum(int arr[], int& sum, int& end, std::vector<std::vector<int>>& pair) {

    int begin = 0;
    while (begin < end) {
        if (arr[begin] + arr[end] < sum)
            begin++;
        else if (arr[begin] + arr[end] > sum)
            end--;
        else {
            std::vector<int> son_pair;
            son_pair.push_back(begin);
            son_pair.push_back(end);
            pair.push_back(son_pair);
            begin++;
            end--;
        }
    }

    if (pair.empty())
        return false;
    else
        return true;
}

int main() {

    int arr[10] = {1,2,4,6,7,9,13,14,15,19};

    int sum = 21;
    int len = 9;
    bool has_sum = false;
    std::vector<std::vector<int>> pair;

    has_sum = find_two_sum(arr, sum, len, pair);

    std::cout << "has_sum:" << has_sum << std::endl;

    for (int i=0; i<pair.size(); i++) {
        std::cout <<"pair" << i+1 << ": " << pair[i][0] << ", " << pair[i][1] << std::endl;
    }

}
