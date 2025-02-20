#include <iostream>
#include <fstream>
#include <vector>

// Schreiben Sie eine Funktion, welche die Fibonacci Zahlen bestimmt
long fibonacci(int n) {
    if(n==1||n==2) {
        return 1;
    }
    if(n<=0) {
        return 0;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}



//Schreiben Sie eine Funktion, welche Rekursiv die Potenz bestimmt
//Wir betrachten nur nicht negative exponenten
int potenz(int n, int exponent) {
    int result {1};
    for(int i=1; i<=exponent; ++i) {
        result *= n;
    }
    return result;
}

/*
Lesen Sie die Datei "input.txt" ein.
Bestimmen für jede Zahl in dieser Datei die Fibonacci Zahl und die vierte Potenz.
Schreiben Sie diese Zahl, die Fibonacci Zahl und die Potenz in eine csv-Datei.
Halten Sie sich an die Konvention der csv-Dateien.
*/
int main() {
    std::ifstream input("../input/input.txt");
    std::ofstream output("output.csv");

    output << "n, sqr, fib" << std::endl;
    int n; 
    while(input >> n){
        output << n << ", " << potenz(n, 4) << ", " << fibonacci(n) << std::endl;
    }

    output.close();
    return 0;
}
