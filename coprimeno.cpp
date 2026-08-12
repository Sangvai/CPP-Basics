#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    int x = a;
    int y = b;

    while(y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }

    if(x == 1) {
        cout << "The numbers are Co-Prime";
    }
    else {
        cout << "The numbers are not Co-Prime";
    }

    return 0;
}