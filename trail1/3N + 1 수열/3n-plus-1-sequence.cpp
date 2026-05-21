#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n = 0;
    int cnt = 0;

    cin >> n;

    while(1) {
        if(n % 2 == 0) {
            n /= 2;
            cnt++;
        }
        else if(n == 1) {
            break;
        }
        else {
            n = n * 3 + 1;
            cnt++;
        }
    }
    
    cout << cnt;
    return 0;
}