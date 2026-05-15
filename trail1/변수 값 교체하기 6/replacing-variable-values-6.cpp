#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a = 2, b = 5;
    int swap = 0;

    swap = a;
    a = b;
    b = swap;

    cout << a << endl << b;
    return 0;
}