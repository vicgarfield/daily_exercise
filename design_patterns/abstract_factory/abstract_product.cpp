//
// Created by Victor Yue on 2017/12/3.
//

#include "abstract_product.h"
#include <iostream>

AbstractProductA::AbstractProductA() {}
AbstractProductA::~AbstractProductA() {}

AbstractProductB::AbstractProductB() {}
AbstractProductB::~AbstractProductB() {}

ProductA1::ProductA1() {}
ProductA1::~ProductA1() {}
long ProductA1::Operation() {
    std::cout << "ProductA1" << std::endl;
}

ProductB2::ProductB2() {}
ProductB2::~ProductB2() {}
long ProductB2::Operation() {
    std::cout << "ProductB2" << std::endl;
}