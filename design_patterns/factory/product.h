//
// Created by Victor on 2017/12/1.
//

#ifndef PROJECT_PRODUCT_H
#define PROJECT_PRODUCT_H

class Product {
public:
    virtual ~Product() = 0;

protected:
    Product();

private:
};

class ConcreteProduct: public Product {
public:
    ~ConcreteProduct();
    ConcreteProduct();

protected:

private:

};

#endif //PROJECT_PRODUCT_H
