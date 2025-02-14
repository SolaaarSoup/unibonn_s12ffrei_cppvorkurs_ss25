#include <print>
#include <vector>

int main(){

    for(char c: {'a','b','c','d'}){
        std::print("Zeichen: {}\n", c);
    }


    std::vector<int> vec {1,2,3,4};
    for(int element: vec){
        std::print("Element: {}\n", element);
    }

}
