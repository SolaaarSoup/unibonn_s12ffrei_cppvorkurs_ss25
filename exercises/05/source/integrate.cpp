#include <iostream>
#include <cmath>
#include <functional>

/*
In dieser Aufgabe ist wollen wir Integrieren. 
Gegeben sind zwei Funktion. Eine einfachere mit welcher Sie überprüfen können ob Ihr Code so funktioniert wie soll
und eine schwere, die wir eigentlich integrieren wollen.
*/

// Einfache Funktion: f(x) = x^2
double simpleFunction(double x) {
    return x * x;
}

//std::function<double (double)> simp =

// Schwierige Funktion: f(x) = exp(-x^2) * cos(x)
double complicatedFunction(double x) {
    return std::exp(-x * x) * std::cos(x);
}

//Implementieren Sie das Trapezverfahren

double trapez(std::function<double (double)> f, double a, double b, uint n){
    double h {(b - a)/n};
    double res {0.5 * h * (f(b) - f(a))};
    for(uint i {0}; i<n; i++){
        res += (h * f(a + i*h));
    }
    
    return res;
}


//Implementieren Sie die Simpson-Regel

double simpson(std::function<double (double)> f, double a, double b, uint n){
    double h {(b - a)/n};
    double res;
    for(uint i {0}; i<n; i++){
        res += (h/6) *(f(a + i*h) + 4 * f((2*a + (2*i + 1)*h)/2) + f(a + (i+1)*h));
    }
    return res;
}


//Bonus Aufgabe:
//Implementieren Sie die Adaptive Simpson-Integration
//https://en.wikipedia.org/wiki/Adaptive_quadrature

int main() {
    // Integrationsgrenzen
    double a = 0.0;
    double b = 3.0;
    uint N = 10000000;

    double res_sf_theo = 9.0;
    double res_cf_theo = 0.69021;

    double res_sf_simp = simpson(simpleFunction, a, b ,N);
    double res_cf_simp = simpson(complicatedFunction, a , b, N);

    double res_sf_trap = trapez(simpleFunction, a, b ,N);
    double res_cf_trap = trapez(complicatedFunction, a , b, N);

    std::cout << "Theoretisch: Simple " << res_sf_theo << ", Complicated " << res_cf_theo << std::endl;
    std::cout << "Trapez: Simple " << res_sf_trap << ", Complicated " << res_cf_trap << std::endl;
    std::cout << "Simpson: Simple " << res_sf_simp << ", Complicated " << res_cf_simp << std::endl;
    return 0;
}
