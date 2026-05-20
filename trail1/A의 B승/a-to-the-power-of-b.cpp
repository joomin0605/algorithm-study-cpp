#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a = 0, b = 0;
    int prod = 1;

    cin >> a >> b;

    for(int i = 0; i < b; i++) {
        prod *= a;
    }

    cout << prod;
    return 0;
}