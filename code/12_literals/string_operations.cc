#include <print>
#include <string>

using namespace std::literals::string_literals;

int main(){
    std::string s1 {"Hallo "s};
    std::string s2 {"Welt."s};

    std::println("{}", s1+s2);

    // Zahlen in Strings konvertieren mit std::format
    uint64_t i {7};
    double x {1.2315};
    std::string s {std::format("i={}, x={}", i, x)};
    std::println("{}", s);


    std::string s3 {"Hallo Welt"};
    std::string s4 {s3.substr(6,4)};
    std::println("{}",s4);
}
