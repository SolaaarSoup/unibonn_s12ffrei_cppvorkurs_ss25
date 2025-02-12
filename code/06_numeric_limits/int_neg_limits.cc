#include <print>
#include <limits>
#include <bitset>

template <typename T> void printtypelimits(void)
{
    auto max {std::numeric_limits<T>::max()};
    auto min {std::numeric_limits<T>::min()};
    auto size {sizeof(T)};
    std::print( "{} | {}...{} \n " , size, min, max);
}

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


    std::print("short | "); printtypelimits<short>();
    std::print("int | "); printtypelimits<int>();
    std::print("long | "); printtypelimits<long>();
    std::print("long long | "); printtypelimits<long long>();
    std::print("int16_t | "); printtypelimits<int16_t>();
    std::print("int32_t | "); printtypelimits<int32_t>();
    std::print("int64_t | "); printtypelimits<int64_t>();

}
