//
// Created by Victor Yue on 2017/12/16.
//

#include <iostream>
#include <vector>

class HomeForSale;

int main(int argc, char** argv) {
    std::string df;
    df = "adfaffafdsf";
    std::cout << df.length() << std::endl;
    HomeForSale homeForSale();

    std::cout << "Hello World!" << std::endl;
    return 0;
}

class HomeForSale {
public:

private:
    HomeForSale(const HomeForSale&);
    HomeForSale& operator=(const HomeForSale&);
};