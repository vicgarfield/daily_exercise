//
// Created by Victor on 2017/12/1.
//

#include "factory.h"
#include "product.h"

#include <iostream>

Factory::Factory() {}

Factory::~Factory() {}


ConcreteFactory::ConcreteFactory() {
    std::cout << "ConcreteFactory..." << std::endl;
}

ConcreteFactory::~ConcreteFactory() {}

Product* ConcreteFactory::CreatProduct() {
    return new ConcreteProduct();
}

void ConcreteFactory::addsomething() {
    std::cout << "add something..." << std::endl;
}
