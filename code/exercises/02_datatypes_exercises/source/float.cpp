#include <iostream>
#include <complex>

int main() {
    using namespace std::complex_literals;
    //Berechnet wieder 13 / 3 nur dieses mal mit float und double.


    //std::cout << "Division): " << zaehler << " / " << nenner << " = " << divisionErg << std::endl;

    // Bestimmen nun (i)^2
    std::complex<double> i(0.0, 1.0);

    auto norm = i*i;

    std::cout << "Norm: " << norm << std::endl;

    //Gebe den Imaginärteil von (3+4i) + (1+2i) aus

    std::complex<int> z1(3, 4);
    std::complex<int> z2(1, 2);


    auto im_out = (z1 +z2).imag();

    std::cout << "Imaginärteil: " << im_out << std::endl;

    return 0;
}