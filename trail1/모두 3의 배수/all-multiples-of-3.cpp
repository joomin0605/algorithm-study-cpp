#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    bool t = true;

    for(int i = 0; i < 5; i++) {
        int a = 0;

        cin >> a;

        if(a % 3 != 0) {
            t = false;
        }
    }

    if(t == true) {
        cout << 1;
    }
    else {
        cout << 0;
    }
    return 0;
}