#include <iostream>
#include "simple_math.h"

int main() {
    int a = 10;
    int b = 5;
    std::cout << "Programm 2:" << std::endl;
    std::cout << "Multiplikation: " << Math::multiply(a, b) << std::endl;
    std::cout << "Division: " << Math::divide(a, b) << std::endl;
    return 0;
}
