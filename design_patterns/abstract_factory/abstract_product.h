//
// Created by Victor Yue on 2017/12/3.
//

#pragma once

class AbstractProductA {
public:
    virtual ~AbstractProductA() = 0;
    virtual long Operation() = 0;

protected:
    AbstractProductA();
};

class AbstractProductB {
public:
    virtual ~AbstractProductB() = 0;
    virtual long Operation() = 0;

protected:
    AbstractProductB();
};

class ProductA1:public AbstractProductA {
public:
    ProductA1();
    ~ProductA1();
    long Operation();
};

class ProductB2:public AbstractProductB {
public:
    ProductB2();
    ~ProductB2();
    long Operation();
};