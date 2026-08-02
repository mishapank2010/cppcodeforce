#include <iostream>

int main() {
    long long n;
    std::cin >> n;

    if(n % 2 == 0) {
        std::cout << n/2;
    }
    else {
        std::cout << -(n+1)/2;
    }
    return 0;
}