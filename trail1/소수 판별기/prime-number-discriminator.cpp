#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n = 0;
    bool t = true;

    cin >> n;

    for(int i = 2; i <= (n - 1); i++) {
        if(n % i == 0) {
            t = false;
        }
    }

    if(t == true) {
        cout << "P";
    }
    else {
        cout << "C";
    }
    return 0;
}