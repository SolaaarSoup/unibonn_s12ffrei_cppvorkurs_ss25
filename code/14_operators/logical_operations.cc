#include <print>

int main(){
    bool a {true};
    bool b {true};
    std::println("a xor b: {}", a!=b);
    std::println("a and b: {}", a && b);

    // Bitwise
    int x {14};
    int y {12};

    std::println("x: {:b}", x );
    std::println("y: {:b}",  y);
    std::println("x or y: {:04b}", x xor y); // führende Nullen drucken
}
