#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string s;
    std::cin >> s;
    int upper = 0;
    int lower = 0;

    for(char c : s) {
        if(std::isupper(c)) {
            upper++;
        }
        else if(std::islower(c)) {
            lower++;
        }
    }

    for(char &c : s) {
       c = (upper > lower) ? std::toupper(c) : std::tolower(c);
    }
    std::cout << s;
    return 0;
}
