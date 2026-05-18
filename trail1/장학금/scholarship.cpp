#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int mid, end = 0;

    cin >> mid >> end;

    if(mid >= 90 && end >= 95) {
        cout << 100000;
    }
    else if(mid >= 90 && end >= 90) {
        cout << 50000;
    }
    else {
        cout << 0;
    }
    return 0;
}