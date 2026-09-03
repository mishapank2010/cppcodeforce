#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

int main() {
    std::string s;
    std::cin >> s;
    std::vector<char> nums;

    for(int i = 0; i < s.size(); i+=2) {
        nums.push_back(s[i]);
    }

    std::sort(nums.begin(), nums.end());

    for(int i = 0; i < nums.size(); i++) {
        std::cout << nums[i];
        if(i != nums.size() - 1) {
            std::cout << "+";
        }
    }
    return 0;
}