#include <print>
int main(){

    int N {5};

    for(int idx {0}; idx<N; idx++){
        std::print("{}", idx);
        
        // Komma nach jeder Zahl, . und \n am Ende
        if(idx<(N-1)) 
            std::print(", ");
        else
            std::print(".\n");
    }



    // While loop mit for emulieren:
    int idx {0}; // ACHTUNG: idx gibt es ja nicht mehr!
    for(;idx<N;) // identisch mit while
    {
        std::print("{}", idx);
        
        // Komma nach jeder Zahl, . und \n am Ende
        if(idx<(N-1)) 
            std::print(", ");
        else
            std::print(".\n");

        idx++;
    }


}
