#include <iostream>
#include <stdio.h>

int main() {
    //Fuer die erste Aufgabe wird eine Zahl eingelesen. Diese wird dann auch nochmal auf dem Terminal ausgeben zum ueberpruefen.
    int zahl;
    std::cout << "Bitte geben Sie eine ganze Zahl ein: ";
    std::cin >> zahl;
    std::cout << "Die eingegebene Zahl lautet: " << zahl << std::endl;

    //Erste Teilaufgabe: Ueberpruefe ob die Zahl groessen, kleiner oder gleich 0 ist. Gebt dazu das Ergebnis aus.

    if(zahl==0){
        std::cout << "Die Zahl ist 0" << std::endl;
    } else if(zahl > 0) {
        std::cout << "Die Zahl ist groesser als 0" << std::endl;
    } else if(zahl < 0) {
        std::cout << "Die Zahl ist kleiner als 0" << std::endl;
    }


    //Zweite Teilaufgabe: Bestimmt ob die Zahl gerade ist

    if(zahl%2==0){
        std::cout << "Zahl ist gerade" << std::endl;
    } else {
        std::cout << "Zahl ist ungerade" << std::endl;
    }

    return 0;
}
