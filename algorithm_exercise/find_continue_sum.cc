//
// Created on 8/11/18.
//

#include <iostream>
#include <vector>

void find_continue_sum(const int s) {
    int max_ele = (s + 1) / 2;
    int sum = 0;
    int i = 0;
    while (sum < s && i < max_ele) {
        int j = i;
        while (sum < s && j <= max_ele) {
            sum += ++j;
        }

        if (sum == s) {
            std::cout << "list:" << i+1 << "~" << j << std::endl;
        }
        i++;
        sum = 0;
    }
}

int main() {

    int s = 15;

    find_continue_sum(s);

}



