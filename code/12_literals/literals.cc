#include <print>
#include <complex>
#include <iostream>
#include <string>

int main(void){
    int a {1234};
    long b {0x1234ffa121ff121L}; // long literal
    int c {0b1101101011110};
    unsigned int d {0x121ff121U}; // unsigned literal
    unsigned long int e {0x121ff121UL}; //unsinged long
    //
    // Komplexe Literale
    using namespace std::complex_literals;

    std::complex<double> z {1.0 + 4.3i};
    std::cout << "z=" << z << std::endl;

} 
