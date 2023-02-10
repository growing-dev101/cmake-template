#include <iostream>
#include "moduleB.h"

void functionA(void) {
    std::cout << "functionA called\n";
    functionB();
}