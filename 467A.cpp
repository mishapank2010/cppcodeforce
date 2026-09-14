#include <iostream>

int main() {
    int n, p, q;
    int couter = 0;
    std::cin >> n;
    for(int i = 0; i < n; i++) {
        std::cin >> p >> q;
        int sum = q - p;
        if(sum >= 2) {
            couter++;
        }
    }
    std::cout << couter;
    return 0;
}
