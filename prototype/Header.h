#pragma once
#include <iostream>
#include <map>

using namespace std;
enum Type
{
    Concrete1 = 0,
    Concrete2 = 1
};

class Prototype
{
public:
    virtual Prototype* clone() = 0;
    virtual void print() = 0;
};

class ConcretePrototype1 : public Prototype
{
public:
    int _a;
    void print();
    ConcretePrototype1();
    ConcretePrototype1(int a);
    ConcretePrototype1* clone();

};

class ConcretePrototype2 : public Prototype
{
public:
    int _a;
    void print();
    ConcretePrototype2();
    ConcretePrototype2(int a);
    ConcretePrototype2* clone();
};

class PrototypeCreator
{
    std::map<Type, Prototype*> _protoList;
public:
    PrototypeCreator();
    Prototype* createPrototype(Type t);
};
