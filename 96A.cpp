#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;
    int couter1 = 0, couter0 = 0;

    for(int i = 0; i <= s.length(); i++) {
        if(s[i] == '0') {
            couter0++;
            couter1 = 0;
        }
        else {
            couter1++;
            couter0 = 0;
        }
        if(couter0 >= 7 || couter1 >= 7) {
            break;
        }
    }
    if(couter0 >= 7 || couter1 >= 7) {
        std::cout << "YES";
    }
    else {
        std::cout << "NO";
    }
}
