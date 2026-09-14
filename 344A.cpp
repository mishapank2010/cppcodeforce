#include <iostream>
#include <string>

int main() {
    int n;
    int groups = 1;
    std::cin >> n;
    std::string current, previos;

    std::cin >> current;
    for(int i = 1; i < n; i++) {
        std::cin >> previos;
        if(current != previos) {
            groups++;
            current = previos;
        }
    }
    std::cout << groups;
    return 0;
}
