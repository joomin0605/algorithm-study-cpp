#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int cntc = 0, cntp = 0, cntt = 0;
    int n = 0;

    cin >> n;

    for(int i = 1; i <= n; i++) {
        if((i % 2 == 0) && (i % 3 != 0) && (i % 12 != 0)) {
            cntc++;
        }
        else if((i % 3 == 0) && (i % 12 != 0)) {
            cntp++;
        }
        else if((i % 12 == 0)) {
            cntt++;
        }
        else if((i % 3 == 0) && (i % 12 == 0)) {
            cntt++;
        }
        else if((i % 2 == 0) && (i % 3 == 0) && (i % 12 == 0)) {
            cntt++;
        }
    }

    cout << cntc << " " << cntp << " " << cntt;
    return 0;
}