#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b, c = 0;

    cin >> a >> b >> c;

    if(a <= c && a <= b) {
        cout << 1 << " ";
    }
    else {
        cout << 0 << " ";
    }
    if(a == b && b == c) {
        cout << 1;
    }
    else {
        cout << 0;
    }
    return 0;
}