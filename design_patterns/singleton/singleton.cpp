//
// Created by Victor on 2017/12/3.
//

#include "singleton.h"
#include <iostream>

Singleton* Singleton::singleton_ = 0;

Singleton::Singleton() {}
Singleton::~Singleton() {}
Singleton* Singleton::Instance() {
    if(singleton_ == 0)
        singleton_ = new Singleton();
    std::cout << "singleton_ ptr:" << singleton_ << std::endl;
    return singleton_;
}