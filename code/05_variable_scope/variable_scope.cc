#include <print>

int main(void){

    {
        int a {5};
        {
            int a{0};
            std::print("lokal: {}\n",a);
        }
        std::print("{}\n",a);
    }
    // a=3; // ERROR! a not defined



}
