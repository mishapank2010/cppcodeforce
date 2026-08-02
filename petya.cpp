#include <iostream>
#include <string>

int main() {
    std::string a, b;
    std::cin >> a >> b;

    for(int i = 0; i < a.size(); i++) {
        a[i] = tolower(a[i]);
    }

    for(int i = 0; i < b.size(); i++) {
        b[i] = tolower(b[i]);
    }

    if(a < b) {
        std::cout << "-1";
    }
    if(a > b) {
        std::cout << "1";
    }
    if(a == b) {
        std::cout << "0";
    }
    return 0;
}