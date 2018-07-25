//
// Created by Victor Yue on 2017/12/3.
//

#include "abstract_factory.h"

AbstractFactory::AbstractFactory() {}
AbstractFactory::~AbstractFactory() {}

ConcreteFactory1::ConcreteFactory1() {}
ConcreteFactory1::~ConcreteFactory1() {}
AbstractProductA* ConcreteFactory1::CreteProductA() {
    return new ProductA1();
}
AbstractProductB* ConcreteFactory1::CreteProductB() {
    return new ProductB2();
}



