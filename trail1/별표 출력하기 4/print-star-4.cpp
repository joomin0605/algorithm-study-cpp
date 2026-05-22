#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n = 0;

    cin >> n;

    for(int  i = n; i > 0; i--) {
        for(int j = i - 1; j >= 0; j--) {
            cout << "* ";
        }
        cout << endl;
    }

    for(int i = 2; i <= n; i++) {
        for(int j = 1; j < i + 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}