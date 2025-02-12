#include <print>

int main(){
    int a=17;
    int b=2;
    std::println("a/b: {}", a/b);

    int result {a/b};
    std::println("a/b: {}", result);

    // modulo
    std::println("a%b: {}", a%b);

    // Konversion in double

    std::println("double a/b: {}", static_cast<double>(a)/b ); // Achtung, nur EINEN Operanden
    std::println("double a/b: {}", static_cast<double>(a/b) ); // Achtung, nur EINEN Operanden

}
