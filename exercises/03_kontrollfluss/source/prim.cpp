#include <iostream>

int main() {
    //Aufgabe 3: Schreiben einen Code, welcher ueberprueft ob die Zahl eine Primzahl ist.
    //Auch hier wieder die Zahl n einlesen über das Terminal.

    long zahl; 
    std::cout << "Bitte geben Sie eine ganze Zahl ein: ";
    std::cin >> zahl;

    for (long i=2; i<zahl+1; ++i) {
        if(i==zahl) {
            std::cout << zahl << " ist eine Primzahl!" << std::endl;
        }
        else if(zahl%i == 0) {
            std::cout << zahl << " ist keine Primzahl!" << std::endl;
            break;
        }
    }

    return 0;
}
