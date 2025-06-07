#include "Header.h"

void ConcretePrototype1::print()
{
    cout << "concrete 1: " << _a << endl;
}

ConcretePrototype1::ConcretePrototype1() {};

ConcretePrototype1::ConcretePrototype1(int a) :_a(a) {};

ConcretePrototype1* ConcretePrototype1::clone()
{
    return new ConcretePrototype1(*this);
}

void ConcretePrototype2::print()
{
    cout << "concrete 2: " << _a << endl;
}

ConcretePrototype2::ConcretePrototype2() {};

ConcretePrototype2::ConcretePrototype2(int a) :_a(a) {};

ConcretePrototype2* ConcretePrototype2::clone()
{
    return new ConcretePrototype2(*this);
}

PrototypeCreator::PrototypeCreator(){
    _protoList[Type::Concrete1] = new ConcretePrototype1(12);
    _protoList[Type::Concrete2] = new ConcretePrototype2(23);
}

Prototype* PrototypeCreator::createPrototype(Type t)
{
    return _protoList[t]->clone();
}
