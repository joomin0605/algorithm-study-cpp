#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char p1, p2, p3;
    int pt1, pt2, pt3 = 0;
    int cnt = 0;

    cin >> p1 >> pt1;
    cin >> p2 >> pt2;
    cin >> p3 >> pt3;
    
    if((p1 == 'Y') && (pt1 >= 37)) {
        cnt++;
    }
    if((p2 == 'Y') && (pt2 >= 37)) {
        cnt++;
    }
    if((p3 == 'Y') && (pt3 >= 37)) {
        cnt++;
    }

    if(cnt >= 2) {
        cout << "E";
    }
    else {
        cout << "N";
    }
    return 0;
}