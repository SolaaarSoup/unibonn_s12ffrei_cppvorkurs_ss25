#include <iostream>


int add (int a, int b){
    return a + b;
}


int main(){
    //Versuchen Sie, dass dieses Programm funktioniert, ohne eine Änderung der Main Funktion.
    int a {5}, b {10};
    std::cout << "Die Summe von " << a << " und " << b << " ist: " << add(a,b) << std::endl;

    double c {4.6}, d {8.75};
    std::cout << "Die Summe von " << c << " und " << d << " ist: " << add(c,d) << std::endl;

    return 0;
}