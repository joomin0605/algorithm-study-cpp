#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n = 0;
    bool t = false;

    cin >> n;

    for(int i = 2; i <= (n - 1); i++) {
        if(n % i == 0) {
            t = true;
        }
    }

    if(t == true) {
        cout << "C";
    }
    else {
        cout << "N";
    }
    return 0;
}