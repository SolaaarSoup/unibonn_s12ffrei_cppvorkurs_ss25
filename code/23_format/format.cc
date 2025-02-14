#include <format>
#include <string>
#include <print>
#include <numbers>

int main(){

    auto pi = std::numbers::pi_v<double>;
    auto e = std::numbers::e_v<double>;
    std::string str {std::format("pi = {:25.18e}\ne  ={:25.18f}\n", pi, e)};
    std::print("{}",str);

    int i {128347};
    std::string str2 {std::format("{:_>64b}\n", i)};
    std::print("{}",str2);
    std::string str3 {std::format("binary: {:0>64b}\n", i)};
    std::print("{}",str3);
    std::string str4 {std::format("hex: {:0>16x}\n", i)};
    std::print("{}",str4);

    std::print("hex: {:#16x}\n", i);
    std::print("decimal: {:0>16}\n", i);
    std::print("decimal: {:+16}\n", i);


}
