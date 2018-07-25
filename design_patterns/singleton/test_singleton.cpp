//
// Created by Victor Yue on 2017/12/3.
//

#include "singleton.h"

int main() {

    Singleton* sin = Singleton::Instance();
    Singleton* sin1 = Singleton::Instance();

    return 0;
}