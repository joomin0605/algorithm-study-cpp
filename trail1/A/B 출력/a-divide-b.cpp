#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b = 0;

    cin >> a >> b;

    cout << a / b << ".";

    long long c = a % b;

    for(int i = 0; i < 20; i++) {
        c *= 10;
        cout << c / b;
        c %= b;
    }
    return 0;
}