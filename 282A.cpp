#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int x = 0;
    int n;
    cin >> n;
    for(int i=0; i<n; i++) {
        string a;
        cin >> a;
        if(a == "X++" || a == "++X") {
            x++;
        } else if(a == "X--" || a == "--X") {
            x--;
        }
    }
    cout << x << endl;
    return 0;
}
