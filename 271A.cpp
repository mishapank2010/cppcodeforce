#include <iostream>
#include <string>

int main() {
    int y1;
    std::cin >> y1;

    for(;;) {
        y1++;

        std::string y = std::to_string(y1);
        if(y[0] != y[1] && y[0] != y[2] && y[0] != y[3] && y[0] != y[4] && y[1] != y[2] && y[1] != y[3] && y[2] != y[3]) {
            break;
        }
    }
    std::cout << y1;
    return 0;
}
