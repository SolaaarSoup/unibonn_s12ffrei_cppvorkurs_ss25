#include <iostream>

int main(){

    std::cout << "a=" << 12 << std::format(" b= {:.10f}",3.2) << "\n";

    std::cout << " neue Zeile und Puffer leeren" << std::endl;

    std::cout << " Puffer leeren " << std::flush << " und weiter geht es.\n";
}
