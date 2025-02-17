#include <ios>
# include <iostream>
# include <print>
#include <limits>

int main(){
    std::print("Geben Sie bitte zwei reelle Zahlen ein: \n");

    double x1 {0.0};
    double x2 {0.0};

    std::cin >> x1;
    std::cin >> x2;

    if(std::cin.good()){ // stream ist gültig

        std::print("{}+{} = {} \n", x1, x2, x1+x2);
    } else {
        std::cout << "Ungültige Eingabe!" << std::endl;
        std::cin.clear(); // wieder auf gültig setzen
        std::cin.ignore(1000, '\n'); //
    }



        int i {0};
        std::print("Geben Sie eine ganze Zahl ein:\n");
        if(std::cin) std::cin >> i; // Test auf gültigkeit

        std::string s {};
        std::print("Geben Sie ein Wort ein:\n");
        if(std::cin.good()) std::cin >> s; // Liest nur bis zum ersten Leerzeichen 

        std::print("Sie haben eingegeben: \n dec: {0}, bin: {0:#b}, {1}\n", i, s);



}
