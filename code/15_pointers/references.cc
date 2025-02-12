#include <print>
int main(){

    int x {1234};
    int & y {x}; // y und x sind jetzt zwei Namen für die gleiche Variable
    
    std::print("{}\n", x); // 1234
    y=-12;
    std::print("{}\n", x); // -12
}
