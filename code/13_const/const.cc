#include <print>
#include <cmath>
#include<numbers>

// global constant
const double pi {3.141592653589793};

int main(void){

    std::print("{}\n", pi);

    const double pi_half {pi/2.};

    const float euler_f {std::numbers::e_v<float>};
    const double euler_d {std::numbers::e_v<double>};
    std::print("float: {}, double: {}\n", euler_f, euler_d);

} 
