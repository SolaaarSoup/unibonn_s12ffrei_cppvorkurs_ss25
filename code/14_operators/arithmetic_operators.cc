#include <print>
#include <cmath>
#include <numbers>
#include <complex>

// global constant
const double pi {std::numbers::pi};

int main(void){

    double x {pi};
    x++; // unüblich für floats
    std::println("{}",x);

    // Frage: Welchen Wert haben die Variablen?
    int a {3};
    int b {a++};
    int c {++a};
    int d {a+b};
    c=a+b;
    // std::print("a: {}, b: {}, c: {}, d: {}\n", a,b,c,d);

} 
