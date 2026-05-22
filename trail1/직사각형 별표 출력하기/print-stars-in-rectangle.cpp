#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n = 0, m = 0;

    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}