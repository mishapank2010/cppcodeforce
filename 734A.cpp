#include <iostream>
#include <string>

int main() {
    int n, Acount, Dcount;
    std::string s;
    std::cin >> n >> s;

    for(int i = 0; i < n; i++) {
        if(s[i] == 'A') {
            Acount++;
        }
        else {
            Dcount++;
        }
    }
    if(Acount > Dcount) {
        std::cout << "Anton";
    }
    else if(Acount < Dcount) {
        std::cout << "Danik";
    }
    else {
        std::cout << "Friendship";
    }
}
