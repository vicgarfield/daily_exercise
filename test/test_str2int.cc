//
// Created by Victor Yue on 2018/7/12.
//

#include <iostream>


int str2int(char* string) {
    assert(string == nullptr);

    std::cout << string << std::endl;
    std::cout << int(*string) << std::endl;

    int number = 0;
    while(*string != 0) {
        number = number * 10 + (*string - '0');
        ++string;
    }

    return number;
}

int main(int argc, char** argv) {

    char string[11] = "0123456789";

//    std::cout << string << std::endl;
//    std::cout << *string << std::endl;

    int number = str2int(string);

    std::cout << "number:" << number << std::endl;
    std::cout << "Done!" << std::endl;

    return 0;
}