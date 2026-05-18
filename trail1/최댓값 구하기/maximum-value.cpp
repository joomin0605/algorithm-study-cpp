#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b, c = 0;

    cin >> a >> b >> c;
    if(a > b) {
        if(b > c) {
            cout << a;
        }
        else {
            if(a > c) {
                cout << a;
            }
            else {
                cout << c;
            }
        }
    }
    else {
        if(a > c) {
            cout << b;
        }
        else {
            if(b > c) {
                cout << b;
            }
            else {
                cout << c;
            }
        }
    }
    return 0;
}