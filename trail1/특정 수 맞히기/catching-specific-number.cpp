#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n = 0;

    while(1) {
        cin >> n;

        if(n > 25) {
            cout << "Lower" << endl;
        }
        else if(n < 25) {
            cout << "Higher" << endl;
        }
        else {
            cout << "Good";
            break;
        }
    }
    return 0;
}