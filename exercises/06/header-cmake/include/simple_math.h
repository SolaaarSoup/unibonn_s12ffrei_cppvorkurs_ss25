//Dies hier ist wichtig für Header Dateien.
//Ähnliches in jede Header-File einbauen
#ifndef SIMPLE_MATH_H
#define SIMPLE_MATH_H

// Namespace zur Gruppierung unserer Mathefunktionen
namespace Math {
    // Addiert zwei ganze Zahlen und gibt das Ergebnis zurück.
    int add(int a, int b);
    
    // Subtrahiert die zweite Zahl von der ersten und gibt das Ergebnis zurück.
    int subtract(int a, int b);
    
    // Multipliziert zwei ganze Zahlen und gibt das Ergebnis zurück.
    int multiply(int a, int b);
    
    // Teilt die erste Zahl durch die zweite und gibt das Ergebnis als double zurück.
    // Hinweis: Bei Division durch 0 wird hier 0.0 zurückgegeben (alternativ könnte hier eine Exception geworfen werden).
    double divide(int a, int b);
    
    // Gibt das Quadrat einer Zahl zurück.
    int square(int a);
}

#endif // SIMPLE_MATH_H
