#include <iostream>
#include <complex>

int main(void){


    std::complex<double> z{1.0,1.0};
    std::complex<double> x{2.0,3.5};


    std::cout << z << std::endl; // print funktioniert (noch?) nicht 
    std::cout << z.real() << std::endl;
    std::cout << z.imag() << std::endl;
    std::cout << "abs: " << std::abs(z) << std::endl;
    std::cout << "norm: " << std::norm(z) << std::endl;
    std::cout << std::conj(z) << std::endl;
    std::cout << z+x << std::endl;
    std::cout << z*x << std::endl;
    std::cout << z/x << std::endl;

}
