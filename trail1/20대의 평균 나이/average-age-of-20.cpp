#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n = 0;
    int sum = 0;
    int cnt = 0;

    while(1) {
        cin >> n;

        if(n >= 30 || n < 20) {
            break;
        }

        sum += n;
        cnt++;
    }
    cout << fixed;
    cout.precision(2);

    cout << (double)sum / cnt;
    return 0;
}