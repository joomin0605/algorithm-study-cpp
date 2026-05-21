#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n = 0;
    int div = 1;

    cin >> n;

    for(int i = 1; i <= 10; i++) {
        div *= i;
        if(div >= n) {
            cout << i;
            break;
        }
    }
    return 0;
}