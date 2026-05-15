#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a = 5, b = 6, c = 7;
    int swap = 0, temp = 0;

    swap = c;
    temp = b;
    b = a;
    c = temp;
    a = swap;

    cout << a << endl << b << endl << c;
    return 0;
}