#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n = 0;
    char c;

    cin >> c >> n;

    if(c == 'A') {
        for(int i = 1; i <= n; i++) {
            cout << i << " ";
        }
    }
    else if(c == 'D') {
        for(int i = n; i >= 1; i--) {
            cout << i << " ";
        }
    }
    return 0;
}