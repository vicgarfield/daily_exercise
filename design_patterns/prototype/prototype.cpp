//
// Created by Victor Yue on 2017/12/4.
//

#include "prototype.h"
#include <iostream>

Prototype::Prototype() {}
Prototype::~Prototype() {}

ConcretePrototype::ConcretePrototype() {
    std::cout << "ptr1: " << this << std::endl;

}

ConcretePrototype::ConcretePrototype(ConcretePrototype* pro) {
    std::cout << "ptr2: " << this << std::endl;
}

ConcretePrototype::~ConcretePrototype() {}

Prototype* ConcretePrototype::Clone1() {
    return new ConcretePrototype();
}

Prototype* ConcretePrototype::Clone2() {
    return new ConcretePrototype(this);
}
