#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a = 0, b = 0;
    int sum = 0;

    cin >> a >> b;

    if(b >= a) {
        for(int i = a; i <= b; i++) {
            if(i % 5 == 0) {
                sum += i;
            }
        }
    }

    else if(a >= b) {
        for(int i = b; i <= a; i++) {
            if(i % 5 == 0) {
                sum += i;
            }
        }
    }

    cout << sum;
    return 0;
}