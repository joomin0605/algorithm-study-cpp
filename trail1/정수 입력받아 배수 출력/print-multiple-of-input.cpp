#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n = 0;

    cin >> n;
    for(int i = n; i <= n * 5; i += n) {
        cout << i << " ";
    }
    return 0;
}