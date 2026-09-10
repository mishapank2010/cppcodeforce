#include <iostream>

int main() {
    int a, b, n;
    int current = 0;
    int maxcap = 0;
    std::cin >> n;

    for(int i = 0; i < n; i++) {
        std::cin >> a >> b;
        
        current -= a;
        current += b;

        if(current > maxcap) {
            maxcap = current;
        }
    }
    std::cout << maxcap;
    return 0;
}
