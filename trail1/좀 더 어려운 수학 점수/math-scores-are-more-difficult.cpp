#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int ae, am = 0;
    int be, bm = 0;

    cin >> am >> ae;
    cin >> bm >> be;

    if(am != bm) {
        if(am > bm) {
            cout << "A";
        }
        else {
            cout << "B";
        }
    }
    else {
        if(ae > be) {
            cout << "A";
        }
        else {
            cout << "B";
        }
    }
    return 0;
}