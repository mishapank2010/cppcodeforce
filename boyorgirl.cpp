#include <iostream>
#include <string>
#include <set>

int main() {
    std::string a;
    std::cin >> a;

    std::set<char> uChars(a.begin(), a.end());
    if(uChars.size() % 2 == 0) {
        std::cout << "CHAT WITH HER!" << std::endl;
    }
    else {
        std::cout << "IGNORE HIM!" << std::endl;
    }
    return 0;
}