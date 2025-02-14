#include <print>

int main(){

    int a {0};
    int limit {10};

    while(a<limit)
    {
        if(a<(limit-1)){
            std::print("{}, ", a);
        } else {
            std::print("{};\n", a); // Zeilenende bei letzter Iteration
        }
        a++;  
    }
    std::print("a={}\n", a);
}
