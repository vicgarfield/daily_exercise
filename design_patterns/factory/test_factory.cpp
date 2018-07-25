//
// Created by Victor on 2017/12/1.
// Note: Factory Pattern
//

#include "design_patterns/factory/factory.h"
#include "design_patterns/factory/product.h"
#include <iostream>

int main() {

    Factory* fac = new ConcreteFactory();
    Product* pro = fac->CreatProduct();

    std::cout << "pro_ptr: " << pro << std::endl;


    std::cout << "__________________" << std::endl;
    std::cout << "hello world! " << std::endl;
    return 0;
}