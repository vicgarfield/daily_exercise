//
// Created by Victor Yue on 2017/12/3.
//

#pragma once

#include "abstract_product.h"

class AbstractFactory {
public:
    virtual ~AbstractFactory() = 0;
    virtual AbstractProductA* CreteProductA() = 0;
    virtual AbstractProductB* CreteProductB() = 0;
protected:
    AbstractFactory();

private:
};

class ConcreteFactory1: public AbstractFactory {
public:
    ConcreteFactory1();
    ~ConcreteFactory1();

    AbstractProductA* CreteProductA();
    AbstractProductB* CreteProductB();
};
