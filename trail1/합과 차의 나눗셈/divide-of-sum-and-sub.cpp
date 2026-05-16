#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b = 0;

    cin >> a >> b;

    cout << fixed;
    cout.precision(2);

    double c = double(a + b) / double(a - b);
    cout << c;
    return 0;
}