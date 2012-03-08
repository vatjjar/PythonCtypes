
#include "testclass.h"

#include <iostream>

testclass::testclass() :
    v(-1)
{
    std::cout << "-- Sub-Class init\n";
}

testclass::~testclass()
{
    std::cout << "-- Sub-Class destruction\n";
}

int testclass::get()
{
    return v;
}

int testclass::store(int a)
{
    v = a;
    return v;
}
