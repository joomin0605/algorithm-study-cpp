#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int am, ae = 0;
    int bm, be = 0;

    cin >> am >> ae;
    cin >> bm >> be;

    if(am > bm && ae > be) {
        cout << 1;
    }
    else {
        cout << 0;
    }
    return 0;
}