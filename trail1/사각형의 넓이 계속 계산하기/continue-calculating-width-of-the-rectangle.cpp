#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a = 0, b = 0;
    char c;

    while(1) {
        cin >> a >> b >> c;

        cout << a * b << endl;

        if(c == 'C') {
            break;
        }
    }
    return 0;
}