#include <print>
#include <limits>

int main(void){

    
    std::print("\n\n standard types \n");
    std::print("unsigned char: {}\n", std::numeric_limits<unsigned char>::max() );
    std::print("unsigned short: {}\n", std::numeric_limits<unsigned short>::max() );
    std::print("unsigned int: {}\n", std::numeric_limits<unsigned int>::max() );
    std::print("unsigned long: {}\n", std::numeric_limits<unsigned long>::max() );
    std::print("unsigned long long: {}\n", std::numeric_limits<unsigned long long>::max() );
    std::print("\n\n fixed length types \n");
    std::print("uint8_t: {}\n", std::numeric_limits<uint8_t>::max() );
    std::print("uint16_t: {}\n", std::numeric_limits<uint16_t>::max() );
    std::print("uint32_t: {}\n", std::numeric_limits<uint32_t>::max() );
    std::print("uint64_t: {}\n", std::numeric_limits<uint64_t>::max() );

    uint32_t a {0};
    std::print("{}\n", a);
}
