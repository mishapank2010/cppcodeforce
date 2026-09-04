#include <iostream>

int main() {
    long long k, n, w;
    std::cin >> k >> n >> w;

    long long total = 0;

    for(int i = 1; i <= w; i++) {
        total += i * k;
    }

    if(total > n) {
        std::cout << total - n;
    } 
    else {
        std::cout << 0;
    }
    return 0;
}
