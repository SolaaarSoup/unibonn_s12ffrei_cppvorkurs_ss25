#include <iostream>
#include <vector>

int main(void){

    std::vector<int> v(10); // Definiere Vektor der Länge 10

    for(unsigned i=0; i<v.size(); i++){
        v[i]=i; // Initialisiere jedes Element
    }

    for(unsigned i=0; i<v.size(); i++){
        std::cout << v[i] << std::endl; // Gib den Vektor aus
    }

}
