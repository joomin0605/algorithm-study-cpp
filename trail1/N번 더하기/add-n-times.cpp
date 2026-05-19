#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, n = 0;

    cin >> a >> n;

    for(int i = a; i < a + (n * n);) {
        i += n;
        cout << i << endl;
    }
    return 0;
}