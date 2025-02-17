#include <iostream>
#include <cstdint>

int main() {
    // 1. Subtraktion
    // Aufgabe: Vervollständige die Rechenaufgabe 10 - 20
    int minuend = 10;
    int subtrahend = 20;
    int differenz = minuend - subtrahend;
    std::cout << "Subtraktion: " << minuend << " - " << subtrahend << " = " << differenz << std::endl;

    // 2. Addition
    // Aufgabe: Addiere nun die Zahlen 1000000000 und 2000000000

    long zahl1 {1000000000};
    long zahl2 {2000000000};
    long summe = zahl1 + zahl2;

    std::cout << "Addition: " << zahl1 << " + " << zahl2 << " = " << summe << std::endl;

    // 3. Multiplikation
    // Aufgabe: Rechnen Sie nun 5000000000 * 3

    long faktor1 {5000000000};
    long faktor2 {3};
    long produkt = faktor1 * faktor2;

    std::cout << "Multiplikation: " << faktor1 << " * " << faktor2 << " = " << produkt << std::endl;

    // 4. Division
    // Aufgabe: Berechne jetzt 13 / 3

    double zaehler = 13;
    int nenner = 3;
    double divisionErg = zaehler / nenner;

    std::cout << "Division (Ganzzahldivision): " << zaehler << " / " << nenner << " = " << divisionErg << std::endl;

    return 0;
}
