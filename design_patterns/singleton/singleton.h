//
// Created by Victor on 2017/12/3.
//

#ifndef LEARNC_SINGLETON_H
#define LEARNC_SINGLETON_H

#pragma once

class Singleton {
public:
    ~Singleton();
    static Singleton* Instance();

protected:
    Singleton();

private:
    static Singleton* singleton_;

};



#endif //LEARNC_SINGLETON_H
