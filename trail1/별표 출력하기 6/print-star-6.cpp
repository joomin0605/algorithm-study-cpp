#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n = 0;

    cin >> n;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++) {
            cout << "  ";
        }
        for(int j = (2 * n) - (2 * i) - 1; j > 0; j--) {
            cout << "* ";
        }
        cout << endl;
    }

    for(int i = 1; i < n; i++) {
        for(int j = 0; j <= n - i - 2; j++) {
            cout << "  ";
        }
        for(int j = 2; j < 3 + (2 * i); j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}