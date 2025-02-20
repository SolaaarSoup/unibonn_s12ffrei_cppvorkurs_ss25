#include "polynomial.h"

int poly1(int x) {
    // f1(x) = x^2 + 2x + 1
    return x * x + 2 * x + 1;
}

int poly2(int x) {
    // f2(x) = 3x^3 - 4x + 5
    return 3 * x * x * x + 4 * x + 5;
}

int poly3(int x) {
    // f3(x) = 2x^2 - x + 3
    return 2 * x * x - x + 3;
}
