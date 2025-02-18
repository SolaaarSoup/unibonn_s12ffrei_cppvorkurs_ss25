#include <iostream>

/*
Aufgabe 4:
Implementieren Sie als Uebung das Heron-Verfahren zur Berechnung der Quadratwurzel einer Zahl.
Das Heron-Verfahren basiert auf der folgenden Formel:
    x_{i+1} = (1/2) * (x_i + S / x_i)
wobei S die Zahl ist, deren Quadratwurzel berechnet werden soll, und x_i der aktuelle Naeherungswert.
*/

int main() {
    int s;
    std::cout << "Bitte geben Sie eine ganze Zahl ein: ";
    std::cin >> s;
    int n;
    std::cout << "Wie viele Iterationen?: ";
    std::cin >> n;

    double x_i {static_cast<double>(s)};

    for(long i=1; i<n; ++i) {
        x_i = (0.5) * (x_i + s / x_i);
    }

    std::cout << "Die approximierte Wurzel von " << s << " nach " << n << " Iterationen, ist: " << x_i << std::endl;

    return 0;
}
