//
// Created by Victor Yue on 2017/12/3.
//

#include "abstract_factory.h"

int main() {
    AbstractFactory *af = new ConcreteFactory1();
    AbstractProductA *apA = af->CreteProductA();
    AbstractProductB *apB = af->CreteProductB();

    apA->Operation();
    apB->Operation();

    return 0;
}