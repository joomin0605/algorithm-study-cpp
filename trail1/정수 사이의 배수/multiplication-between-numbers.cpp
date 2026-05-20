#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a = 0, b = 0;
    int cnt = 0, sum = 0;

    cin >> a >> b;

    for(int i = a; i <= b; i++) {
        if((i % 5 == 0) || (i % 7 == 0)) {
            sum += i;
            cnt++;
        }
    }

    cout << fixed;
    cout.precision(1);
    cout << sum << " " << (double)sum / cnt;
    return 0;
}