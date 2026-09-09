#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string t, s;
    std::cin >> t >> s;

    std::reverse(t.begin(), t.end());
    
    if(t == s) {
        std::cout << "YES";
    }
    else {
        std::cout << "NO";
    }

    return 0;
}
