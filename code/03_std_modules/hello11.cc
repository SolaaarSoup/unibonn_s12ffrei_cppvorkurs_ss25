#include <iostream>
#include <vector>

int main(void){
    std::vector<double> v(3);
    std::cout << "Hello, world!" << std::endl;

    for(auto e: v){
        std::cout << e << std::endl;
    }
}
