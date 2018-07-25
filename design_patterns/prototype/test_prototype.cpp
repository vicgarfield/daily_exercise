//
// Created by Victor Yue on 2017/12/4.
//

#include "prototype.h"

int main() {

    Prototype* pro = new ConcretePrototype();

    pro->Clone1();
    pro->Clone2();
    pro->Clone1();
    pro->Clone2();


    return 0;
}
