#include <print>
int main(){
    int a {1};
    int b {4};

    std::strong_ordering comp {a<=>b};

    std::println("{}", comp<0);
    std::println("{}", comp>0);
    std::println("{}", comp==0);
}
