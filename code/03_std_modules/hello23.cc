import std;

int main(void){
    std::vector<double> v(3);
    std::println("Hello, world! This is the new println function.");


    // Formatting ranges:
    // https://www.open-std.org/jtc1/sc22/wg21/docs/papers/2022/p2286r8.html
    std::print("{}",v); // no implicit newline
    std::println("{}",std::tuple<int,double,char>(1,2.0,'c')); // including <CR>

    std::print("Here is our vector: {} and we provide a new line char too\n",v); 
}
