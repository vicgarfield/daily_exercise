//
// Created by Victor Yue on 2018/7/17.
//

#include <iostream>
#define ARRAY_SIZE 10


void display(int array[], int array_size) {
    for (int i=0; i<array_size; i++) {
        printf("%-3d", array[i]);
    }
    printf("\n");
}

void swap(int& a, int& b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void quict_sort(int array[], int left, int right) {
    int i, j;

    if (left > right)
        return;

    std::cout << "left:" << left << ", right:" << right << std::endl;
    int mid_num = array[left];
    i = left;
    j = right;

    while (i < j) {
        while (i < j && mid_num < array[j]) {
            j--;
        }

        while (i < j && array[i] <= mid_num) {
            i++;
        }
            display(array, ARRAY_SIZE);
        if (i < j)
            swap(array[i], array[j]);
            display(array, ARRAY_SIZE);
            std::cout << "i:" << i << ", j:" << j << std::endl;
            std::cout << "--------------------" << std::endl;
    }
    swap(array[i], array[left]);

//        exit(0);
    quict_sort(array, left, i-1);
    quict_sort(array, i+1, right);

}

int main(int argc, char* argv[]) {
    int array[10] = {6,5,3,4,7,8,9,2,3,4};

    quict_sort(array, 0, 9);
    display(array, 10);

    int i = 0;
    std::cout << array[i++] << std::endl;
    std::cout << array[++i] << std::endl;
}
