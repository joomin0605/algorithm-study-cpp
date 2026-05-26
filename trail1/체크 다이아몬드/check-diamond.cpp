#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n = 0;

    cin >> n;

    int size = 2 * n - 1;
    int center = n - 1;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int dist = abs(i - center) + abs(j - center);

            if (dist <= center && (i + j) % 2 == center % 2) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << '\n';
    }
    return 0;
}