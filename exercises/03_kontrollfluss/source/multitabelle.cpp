#include <iostream>

int main() {
    //Schreiben Sie Code, welcher die Multiplikationstabelle von 1 bis n ausgibt. Lesen Sie n ein.
    int n;
    std::cout << "Bitte geben Sie eine ganze Zahl ein: ";
    std::cin >> n;

    for (int i1=1; i1<n+1; ++i1) {
        for (int i2=1; i2<n+1; ++i2){
            if(i2==n){
                std::cout << i1 * i2 << std::endl;
            } else
                std::cout << i1 * i2 << " ";
        }
    }
    
    return 0;
}