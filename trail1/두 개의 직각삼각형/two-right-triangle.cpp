#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n = 0;

    cin >> n;

    for(int i = 0; i < n; i++) {
        for(int j = n; j > i; j--) {
            cout << "*";
        }
        for(int k = 0; k < i * 2; k++) {
            cout << " ";
        }
        for(int j = n; j > i; j--) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}