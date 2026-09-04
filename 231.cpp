#include <iostream>
using namespace std;

int main() {
    int totalSolved = 0;
    int n;
    cin >> n;
    if(n >= 1 && n <= 1000) {
        for(int i = 0; i < n; i++) {
            int a, b, c;
            cin >> a >> b >> c;
            int sum = a + b + c;
            if (sum >= 2) {
                totalSolved++;
            }
        }
        cout << totalSolved << endl;
        }
    return 0;
}
