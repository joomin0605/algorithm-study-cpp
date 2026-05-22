#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n = 0;

    cin >> n;

    for(int i = 0; i < n; i++) {
        for(int j = n - 1; j > i; j--) {
            cout << "  ";
        }
        for(int j = 0; j < i * 2 + 1; j++) {    // star
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}