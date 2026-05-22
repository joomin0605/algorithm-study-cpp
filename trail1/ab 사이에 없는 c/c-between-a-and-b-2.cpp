#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a = 0, b = 0, c = 0;
    bool t = true;

    cin >> a >> b >> c;

    for(int i = a; i <= b; i++) {
        if(i % c == 0) {
            t = false;
        }
    }

    if(t == true) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}