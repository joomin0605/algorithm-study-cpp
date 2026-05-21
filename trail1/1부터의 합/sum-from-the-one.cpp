#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n = 0, a = 0;
    int sum = 0;

    cin >> n;

    for(int i = 1; i <= 100; i++) {
        sum += i;
        a = i;
        if(sum >= n) {
            break;
        }
    }

    cout << a;
    return 0;
}