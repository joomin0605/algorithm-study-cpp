#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int line = i + 1;

        if(line % 2 == 1) {
            cout << "*";
        }
        else {
            for(int j = 0; j < line; j++) {
                cout << "* ";
            }
        }

        cout << endl;
    }

    return 0;
}