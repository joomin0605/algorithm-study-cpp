#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n = 0;
    int cnt = 0;

    cin >> n;

    while(n <= 1000) {
        if(n % 2 == 0) {
            n = n * 3 + 1;
            cnt++;
        }
        else {
            n = n * 2 + 2;
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}