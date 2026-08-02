#include <iostream>
#include <iomanip>

int main() {
    int n;
    std::cin >> n;

    double sum = 0.0;
    for(int i = 0; i < n; i++) {
        double p;
        std::cin >> p;
        sum += p;
    }
    std::cout << std::fixed << std::setprecision(12) << sum / n;
    return 0;
}