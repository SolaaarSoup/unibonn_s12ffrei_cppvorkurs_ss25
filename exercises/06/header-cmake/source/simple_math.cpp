#include "simple_math.h"

namespace Math {
    int add(int a, int b) {
        return a + b;
    }
    
    int subtract(int a, int b) {
        return a - b;
    }
    
    int multiply(int a, int b) {
        return a * b;
    }
    
    double divide(int a, int b) {
        if(b == 0) {
            // Bei Division durch 0 wird hier zur Vereinfachung 0.0 zurückgegeben.
            // In echten Anwendungen sollte hier eine Fehlerbehandlung erfolgen.
            return 0.0;
        }
        return static_cast<double>(a) / b;
    }
    
    int square(int a) {
        return a * a;
    }
}
