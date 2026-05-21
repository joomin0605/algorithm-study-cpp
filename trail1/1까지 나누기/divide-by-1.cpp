#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n = 0;
    int cnt = 1;

    cin >> n;

    while(n / cnt > 1) {
        n /= cnt;
        cnt++;
    }

    cout << cnt;
    return 0;
}