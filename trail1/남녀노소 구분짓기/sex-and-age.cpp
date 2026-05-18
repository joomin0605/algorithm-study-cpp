#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int gender, age = 0;

    cin >> gender >> age;

    if(age > 18) {
        if(gender == 0) {
            cout << "MAN";
        }
        else {
            cout << "WOMAN";
        }
    }
    else {
        if(gender == 0) {
            cout << "BOY";
        }
        else {
            cout << "GIRL";
        }
    }
    return 0;
}