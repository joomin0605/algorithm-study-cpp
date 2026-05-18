#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b, c = 0;

    cin >> a >> b >> c;

    if(a < b && a < c) {
        cout << a;
    }
    else if(a < b && c < b) {
        if(a < c) {
            cout << a;
        }
        else {
            cout << c;
        }
    }
    else if(a < c && b < c) {
        if(a < b) {
            cout << a;
        }
        else {
            cout << b;
        }
    }
    else if(b < a && b < c) {
        cout << b;
    }
    else if(b < a && c < a) {
        if(b < c) {
            cout << b;
        }
        else {
            cout << c;
        }
    }
    else {
        cout << c;
    }
    return 0;
}