
#include "testlib_core.h"

#include <iostream>

int main(int argc, char *args[])
{
    std::cout << "init:    " << init()     << "\n";
    std::cout << "store:   " << store(5)   << "\n";
    std::cout << "get:     " << get()      << "\n";
    std::cout << "clear:   " << clear()    << "\n";
    std::cout << "destroy: " << destroy()  << "\n";
}
