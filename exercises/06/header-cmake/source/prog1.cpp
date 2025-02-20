#include <iostream>
#include "simple_math.h"

int main() {
    int a = 10;
    int b = 5;
    std::cout << "Programm 1:" << std::endl;
    std::cout << "Addition: " << Math::add(a, b) << std::endl;
    std::cout << "Subtraktion: " << Math::subtract(a, b) << std::endl;
    return 0;
}
