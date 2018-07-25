//
// Created by Victor on 2017/11/27.
//

#include <iostream>
#include <vector>

int main(){

    std::vector<int> vec, vec2;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);

    vec2.assign(vec.begin(),vec.begin() + vec.size() / 2);

    std::vector<int>::iterator iter;
    std::cout << "vec2: ";
    for(iter = vec2.begin();iter != vec2.end(); iter++) {
        std::cout << *iter << "  ";
//        vec2.pop_back();
    }
    std::cout << std::endl;

    return 0;
}