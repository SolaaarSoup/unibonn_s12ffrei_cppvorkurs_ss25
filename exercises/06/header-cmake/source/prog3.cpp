#include <iostream>
#include "simple_math.h"

int main() {
    int a = 7;
    std::cout << "Programm 3:" << std::endl;
    std::cout << "Quadrat von " << a << " ist " << Math::square(a) << std::endl;
    return 0;
}
