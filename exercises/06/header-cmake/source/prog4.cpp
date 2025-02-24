#include <iostream>
#include "simple_math.h"
#include "double_int.h"

int main() {
    int a = 7;
    std::cout << "Programm 4:" << std::endl;
    std::cout << "Quadrat von " << a << " ist " << Math::square(a) << std::endl;
    std::cout << "Das doppelte von " << a << " ist " << double_int::cbv(a) << std::endl;
    double_int::cbr(a);
    std::cout << "Hier sollte durch CBR die Zahl auch doppelt sein: " << a  << std::endl;
    return 0;
}