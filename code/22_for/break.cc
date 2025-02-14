#include<print>
int main(){

    int N {-5};
    for(int i=4; i>N; i--) {
        if(i<0) break; // springe aus der Schleife, falls i<0
        std::print("i={}\n", i);
    }

}
