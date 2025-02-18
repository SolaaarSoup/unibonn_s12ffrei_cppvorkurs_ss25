#include <stdio.h>
#include <iostream>
/*
Aufgabe 5: Taschenrechner
Schreiben Sie einen Taschenrechner, welcher eine Operation einliest und zwei Zahlen.
Die Operationen sind:
1: Addition
2: Subtracktion
3: Multiplikation
4: Division
5: Taschenrechner beenden

Der Taschenrechner soll so lange laufen, bis der Taschenrechner beendet wird.
*/


int main(){
    while(true){
    double x {0.0};
    double y {0.0};
    int arg {0};
    std::cout << "Bitte geben Sie eine Zahl ein (other characters to quit): ";
    if(std::cin){std::cin >> x; x = x*1.0;} else {break;}
    std::cout << "Bitte geben sie eine zweite Zahl ein (other characters to quit):";
    if(std::cin){std::cin >> y; y = y*1.0;} else {break;}
    std::cout << "Welche Operation wollen sie durchführen? (1:add, 2:sub, 3:mult, 4:div. other characters to quit): ";
    if(std::cin){std::cin >> arg;} else {break;}
    switch(arg){
        case 1:
            std::cout << "Result: " << x+y << std::endl; break;
        case 2:
            std::cout << "Result: " << x-y << std::endl; break;
        case 3:
            std::cout << "Result: " << x*y << std::endl; break;
        case 4:
            std::cout << "Result: " << x/y << std::endl; break;
    }
    }
    return 0;
}