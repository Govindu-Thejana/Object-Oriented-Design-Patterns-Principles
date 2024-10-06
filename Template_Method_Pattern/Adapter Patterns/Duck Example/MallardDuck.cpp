// MallardDuck.cpp
#include "Duck.h"
#include <iostream>

class MallardDuck : public Duck {
public:
    void quack() override {
        std::cout << "Quack" << std::endl;
    }

    void fly() override {
        std::cout << "I'm flying" << std::endl;
    }
};
