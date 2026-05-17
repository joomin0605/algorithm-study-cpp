#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n = 0;

    cin >> n;

    if(n >= 100) {
        cout << "vapor";
    }
    else if(n < 0) {
        cout << "ice";
    }
    else {
        cout << "water";
    }
    return 0;
}