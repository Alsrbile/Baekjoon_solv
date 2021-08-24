#include <iostream>
// 다시
using namespace std;

int main(void) {
    char a[4], b[4];

    cin >> a >> b;

    if (a[0] > b[0]) {
        for (int i = 0; i < 3; i++) 
            cout << a[2-i];
    }
    else if (a[0] < b[0]) {
        for (int i = 0; i < 3; i++) 
            cout << b[2-i];
    }
}