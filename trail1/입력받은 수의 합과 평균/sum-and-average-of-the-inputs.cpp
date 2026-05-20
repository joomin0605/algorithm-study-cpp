#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n = 0;
    int sum = 0, cnt = 0;

    cin >> n;

    for(int i = 0; i < n; i++) {
        int a = 0;

        cin >> a;

        sum += a;
        cnt++;
    }

    cout << fixed;
    cout.precision(1);

    cout << sum << " " << (double)sum / cnt;
    return 0;
}