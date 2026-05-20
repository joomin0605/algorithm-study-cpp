#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n = 0;
    int sum = 0;

    cin >> n;

    for(int i = 0; i < n; i++) {
        int a = 0;

        cin >> a;

        if(a % 2 != 0 && a % 3 == 0) {
            sum += a;
        }
    }

    cout << sum;
    return 0;
}