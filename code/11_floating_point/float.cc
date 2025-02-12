#include <print>
#include <cmath>

int main(void){
    double x {1.2412};
    float  y {1.2412};
    std::print("x={:.16f}, y={:.16f}, diff = {:.16f} \n", x, y, std::abs(x-y));

    bool a {0};
    bool b {x==y};
    bool c {std::abs(x-y)<1e-6};


    std::print("a: {}, b: {}, c: {} \n", a,b,c);


    // QUAD precision
    long double long_two {2};
    long double long_sqrt {std::sqrtl(long_two)};



    double two {2};
    double sqrt {std::sqrt(two)};

    std::print("{}\n", sizeof(long double));
    std::print("x={:.32f}\n",sqrt);
    std::print("z={:.32f}\n",long_sqrt);



}
