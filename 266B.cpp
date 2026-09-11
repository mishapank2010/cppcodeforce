#include <iostream>
#include <string>
#include <algorithm>

int main() {
    int n, t;
    std::string s;
    std::cin >> n >> t;
    std::cin >> s;
    
    while(t--) {
        for(int i = 0; i < n - 1; i++) {
            if(s[i] == 'B' && s[i + 1] == 'G') {
                s[i] = 'G';
                s[i + 1] = 'B';
                i++;
            }
        }
    }
    std::cout << s;
    return 0;
}
