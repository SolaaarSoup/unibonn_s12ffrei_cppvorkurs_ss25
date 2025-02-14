#include <print>

int main(){

    int a {0};
    int limit {10};

    while(a<limit)
    {
        if(a>7) break;
        a++;  
    }
    std::print("a={}\n", a);
}
