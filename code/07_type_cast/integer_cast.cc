#include <print>

int main(void){
    uint64_t unsig_a{10};
    int64_t  a {unsig_a}; // not OK


    int64_t sig_b{-10};
    uint64_t unsig_b { sig_b }; // not OK

    int32_t short_sigb {static_cast<int32_t>(sig_b)}; // OK
}
