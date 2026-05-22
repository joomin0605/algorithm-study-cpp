#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n = 0;

    cin >> n;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i + 1; j++) {
            cout << "*";
        }
        cout << endl << endl;
    }

    for(int i = 2; i <= n; i++) {
        for(int j = n - 1; j >= i - 1; j--) {
            cout << "*";
        }
        cout << endl << endl;
    }
    return 0;
}