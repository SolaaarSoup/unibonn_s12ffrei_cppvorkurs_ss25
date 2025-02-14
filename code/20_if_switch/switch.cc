#include <print>

int main(){
    int a {0}; //...
    a=3;
    switch(a){
        case 0: 
            std::println("a==0"); break;
        case 1:
            std::println("a==1"); break;
        case -1:
            std::println("a=-1"); break;
        default:
            std::println("a not in [0,1,-1]"); break;
    }
}
