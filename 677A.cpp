#include <iostream>

int main() {
    int n, h;
    std::cin >> n >> h;

    int total_wigth = 0;
    for(int i = 0; i < n; i++) {
        int a;
        std::cin >> a;
        if(a > h) {
            total_wigth += 2;
        }
        else {
            total_wigth += 1;
        }
    }
    std::cout << total_wigth << "\n";
    return 0;
}
