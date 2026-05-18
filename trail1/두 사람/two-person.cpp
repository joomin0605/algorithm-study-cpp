#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int p1_age, p2_age = 0;
    char p1_b, p2_b;

    cin >> p1_age >> p1_b;
    cin >> p2_age >> p2_b;

    if((p1_age > 18 && p1_b == 'M') || (p2_age > 18 && p2_b == 'M')) {
        cout << 1;
    }
    else {
        cout << 0;
    }
    return 0;
}