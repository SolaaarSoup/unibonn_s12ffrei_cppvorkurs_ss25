#include <print>

int main(){

    int x {0b10110101};
    int y {0b00101101};

    std::println("x: {:b}", x );
    std::println("y: {:b}",  y);
    std::println("x xor y: {:08b}", x xor y); // führende Nullen drucken
    std::println("x >> 2:  {:08b}", x >> 2); // um 2 verschieben nach rechts
    std::println("x << 4:  {:012b}", x << 4); // um 4 verschieben nach links 

    std::println("2 hoch 10: {}", 1<<10);
}
