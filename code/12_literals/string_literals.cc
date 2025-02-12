#include <print>
#include <string>

int main(void){

    char n {'\n'};
    // char m {'abn'}; // nicht ok, zu lang für 1 Byte
    
    // C-Strings VERMEIDEN!
    char cstr[6] {"hallo"}; // Achtung! Länge 6!
    std::print("{}\n", cstr);
    //
    // C++ std::string
    std::string cxx_string {"das ist ein C-String Literal\n"}; // implizite Umwandlung von char *
std::string cxx_string_raw {R"(
Das ist ein 
  C++ RAW String Literal. 
    Sonderzeichen wie "\" werden direkt übernommen.

    )"}; 
    std::print("{}", cxx_string_raw);

    using namespace std::literals::string_literals;
    std::string str2 {"Ein echter C++ std::string! Äußerst gut!"s};
    std::print("{}\n",str2);

}
