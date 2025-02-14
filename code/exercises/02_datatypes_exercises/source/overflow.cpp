#include <iostream>
#include <limits>   //Wird benötigt um den maximalen Wert eines Datentypens zu belegen
#include <cstdint>  // Für uint32_t, int32_t, int64_t

int main() {
    // 1. Erstellen Sie eine Variable vom Typ uint32_t und initialisieren Sie sie
    //    mit dem maximalen Wert.
    uint32_t zahl = std::numeric_limits<uint32_t>::max();
    
    std::cout << "Initialer Wert von uint32_t (max): " << zahl << std::endl;
    
    // 2. Fügen Sie nun 1 zur Variable hinzu.
    zahl = zahl + 1;  // Was erwarten Sie hier?
    
    std::cout << "Wert von uint32_t nach Addition von 1: " << zahl << std::endl;
    
    // 3. Wiederholen Sie den Vorgang für int32_t und int64_t:
    
    // a) Für int32_t:
    int32_t a = std::numeric_limits<int32_t>::max();
    std::cout << "\nInitialer Wert von int32_t (max): " << a << std::endl;
    // Ergänzen Sie hier, was passiert, wenn Sie 1 addieren:
    a = a + 1;  // Was passiert hier? 
    std::cout << "int32_t nach Addition von 1: " << a << std::endl;
    
    // b) Für int64_t:
    int64_t b = std::numeric_limits<int64_t>::max();
    std::cout << "\nInitialer Wert von int64_t (max): " << b << std::endl;
    b = b + 1;  // Was passiert hier?
    std::cout << "int64_t nach Addition von 1: " << b << std::endl;

    // 4. Welche Größe hat der Datentyp int?
    int x = std::numeric_limits<int>::max();
    std::cout << x << std::endl;

    x =  std::numeric_limits<int>::min();
    std::cout << x << std::endl;

    
    return 0;
}
