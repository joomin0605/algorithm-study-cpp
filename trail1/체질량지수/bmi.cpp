#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int h, w = 0;
    int b = 0;

    cin >> h >> w;

    b = (10000 * w) / (h * h);

    if(b >= 25) {
        cout << b << endl << "Obesity";
    }
    else {
        cout << b;
    }
    return 0;
}