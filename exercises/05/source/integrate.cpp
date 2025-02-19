#include <iostream>
#include <cmath>

/*
In dieser Aufgabe ist wollen wir Integrieren. 
Gegeben sind zwei Funktion. Eine einfachere mit welcher Sie überprüfen können ob Ihr Code so funktioniert wie soll
und eine schwere, die wir eigentlich integrieren wollen.
*/

// Einfache Funktion: f(x) = x^2
double simpleFunction(double x) {
    return x * x;
}

// Schwierige Funktion: f(x) = exp(-x^2) * cos(x)
double complicatedFunction(double x) {
    return std::exp(-x * x) * std::cos(x);
}

//Implementieren Sie das Trapezverfahren



//Implementieren Sie die Simpson-Regel



//Bonus Aufgabe:
//Implementieren Sie die Adaptive Simpson-Integration
//https://en.wikipedia.org/wiki/Adaptive_quadrature

int main() {
    // Integrationsgrenzen
    double a = 0.0;
    double b = 3.0;

    
    return 0;
}
