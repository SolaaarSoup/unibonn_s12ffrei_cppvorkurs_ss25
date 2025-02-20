#include <iostream>
#include <fstream>
#include <filesystem>
#include <vector>

//Für diese Aufgabe haben Sie nun schon zwei Funktionen gegeben. An diesen müssen Sie nichts ändern, sondern diese einfach nur Aufrufen
// Funktion zur Berechnung der Fibonacci-Zahlen
long fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Eine weitere Funktion, hier als Beispiel eine quadratische Funktion
int quadratic(int n) {
    return n * n;
}


/*
Schreiben sie nun Code, welcher eine csv-Datei öffnet und dort die Quadratzahlen und Fibonaccizahlen von 1 bis n reinschreibt.
*/
int main() {
    int n {50};

    std::ofstream output("output.csv");

    output << "i, sqr, fib" << std::endl;

    for(int i=0; i<n; ++i){
        output << i << ", " << quadratic(i) << ", " << fibonacci(i) << std::endl;
    }

    output.close();

    return 0;
}
