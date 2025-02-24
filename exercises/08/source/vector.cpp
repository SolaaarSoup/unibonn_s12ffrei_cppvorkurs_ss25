#include <iostream>
#include <fstream>
#include <vector>
#include <string>

/*
Lesen Sie die Datei "input.txt" ein und speichern Sie diese in einem Vektor.
Bestimmen Sie die Anzahl der Elemente und den Durchschnitt.
Geben Sie den Vektor nun in Umgekehrter Reihenfolge wieder aus.
*/

using namespace std;

int main() {
    std::vector<double> vec;
    std::ifstream input("../input/input.txt");

    double i;
    double sum;

    while(input >> i){
        vec.push_back(i);
    }

    for(double num: vec){
        sum += num;
        }
    
    std::cout << "Länge: " << vec.size() << std::endl;

    std::cout << "Durchschnitt: " << sum/vec.size() << std::endl;

    for(auto it = vec.rbegin(); it != vec.rend(); ++it){
        std::cout << *it << std::endl;
    }

    return 0;
}
