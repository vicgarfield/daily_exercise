//
// Created by Victor on 2017/12/1.
//

#include "product.h"
#include <iostream>

Product::Product() {}

Product::~Product() {}


ConcreteProduct::ConcreteProduct() {
    std::cout << "ConcreteProduct..." << std::endl;
}

ConcreteProduct::~ConcreteProduct() {}