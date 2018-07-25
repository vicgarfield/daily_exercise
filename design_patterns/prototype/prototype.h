//
// Created by Victor Yue on 2017/12/4.
//

#ifndef LEARNC_PROTOTYPE_H
#define LEARNC_PROTOTYPE_H

class Prototype {
public:
    virtual ~Prototype() = 0;
    virtual Prototype* Clone1() = 0;
    virtual Prototype* Clone2() = 0;
protected:
    Prototype();
};

class ConcretePrototype:public Prototype {
public:
    ConcretePrototype();
    ConcretePrototype(ConcretePrototype* pro);
    ~ConcretePrototype();
    Prototype* Clone1();
    Prototype* Clone2();

};

#endif //LEARNC_PROTOTYPE_H
