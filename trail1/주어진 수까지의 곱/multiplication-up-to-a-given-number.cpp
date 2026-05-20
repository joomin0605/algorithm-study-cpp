#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a = 0, b = 0;
    int prod = 1;

    cin >> a >> b;

    for(int i = a; i <= b; i++) {
        prod *= i;
    }

    cout << prod;
    return 0;
}