#include <iostream>
#include <numeric>
#include <array>
using namespace std;

/*
Aufgabenstellung:
Erstellen Sie ein Array von 1 bis n.
Erstellen Sie eine Funktion, welche ein Array übergeben bekommt und die geraden Werte verdoppelt und die ungeraden um eins erhöht.
Geben Sie das überarbeite Array auf der Konsole aus.
*/

const int n = 10; // Anzahl der Elemente im Array

void change_array(std::array<int, 10> &arr){
    for(int i {0}; i<n; i++){
    if(arr[i]%2 == 0){
        arr[i]*=2;
    } else {
        arr[i]++;
    }
    }

}

int main() {
    
    
    std::array<int, n> num_n = {};
    std::iota(num_n.begin(), num_n.end(), 1);

    change_array(num_n);

    for(int num: num_n){
    std::cout << num << std::endl;
    }

    return 0;
}
