#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n = 0;

    cin >> n;

    while(n <= 100) {
        if(n >= 90) {
            cout << "A ";
            n++;
        }
        else if(n < 90 && n >= 80) {
            cout << "B ";
            n++;
        }
        else if(n < 80 && n >= 70) {
            cout << "C ";
            n++;
        }
        else if(n < 70 && n >= 60) {
            cout << "D ";
            n++;
        }
        else {
            cout << "F ";
            n++;
        }
    }
    return 0;
}