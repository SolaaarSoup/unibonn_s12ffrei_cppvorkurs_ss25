#include <print>
#include <limits>
#include <bitset>

int main(void){

    int16_t a {1};
    a=-1;
    std::print("a={}\n",a);
    a=std::numeric_limits<int16_t>::max();
    std::print("a={}\n",a);
    a++;
    std::print("a={}\n",a);

}
