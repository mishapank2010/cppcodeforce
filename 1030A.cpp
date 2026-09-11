#include <iostream>

int main() {
    int n;
    int ans = 0;
    std::cin >> n;

    for(int i = 0; i < n; i++) {
        std::cin >> ans;
        if(ans == 1) {
            std::cout << "HARD";
            return 0;
        }
    }

//    if(ans >= 1) {
//        std::cout << "HARD";
//    }
//    else {
        std::cout << "EASY";
//    }
    return 0;
}
