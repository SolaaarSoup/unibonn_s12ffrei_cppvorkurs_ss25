#include <print>

int main(){
    uint64_t a {123456}; // variable a in der 123456 gespeichert ist
    uint64_t b {9876}; // variable b
    
    uint64_t * ptr_a {&a}; // Zeiger auf die Adresse von a
    uint64_t * ptr_b {&b}; // Zeiger auf die Adresse von b
    
    std::print("ptr_a zeigt auf Variable mit Inhalt: {}, ptr_b auf: {}\n", *ptr_a, *ptr_b); // Inhalt
    std::print("ptr_a: {}\n", reinterpret_cast<uint64_t>(ptr_a)); // Adresse
    std::print("ptr_b: {}\n", reinterpret_cast<uint64_t>(ptr_b)); // Adresse
    std::print("++ptr_b: {}\n", reinterpret_cast<uint64_t>(ptr_b+1)); // Adresse
    
    std::print("*ptr_a: {}\n", *ptr_a);
    std::print("*(ptr_a+1): {}\n", *(ptr_a+1));

    std::print("*ptr_b: {}\n", *ptr_b);
    std::print("*(ptr_b+1): {}\n", *(ptr_b+1)); 

    
    std::print("*(ptr_b+10000): {}\n", *(ptr_b+10000)); // segfault

}
