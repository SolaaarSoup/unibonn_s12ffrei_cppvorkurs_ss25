#include <print>

int main(int argc, char * argv[]){
  std::print("Das Programm wurde mit {} Parametern aufgerufen.\n", argc);
  for(int i {0}; i<argc; i++){
    std::print("Parameter {}: {}\n", i, argv[i]);
  }
}
