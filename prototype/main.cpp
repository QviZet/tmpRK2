#include "Header.h"

int main()
{
    PrototypeCreator* creator = new PrototypeCreator;
    Prototype* newClone = creator->createPrototype(Type::Concrete1);
    newClone->print();
    return 0;
}
