// Duck.h
#ifndef DUCK_H
#define DUCK_H

class Duck {
public:
    virtual void quack() = 0;
    virtual void fly() = 0;
    virtual ~Duck() {}
};

#endif // DUCK_H
