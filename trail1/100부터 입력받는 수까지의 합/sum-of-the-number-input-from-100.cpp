#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n = 0;
    int sum = 0;

    cin >> n;

    for(int i = n; i <= 100; i++) {
        sum += i;
    }

    cout << sum;
    return 0;
}