#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int lcm;

    for(int i = max(a, b); ; i++) {
        if(i % a == 0 && i % b == 0) {
            lcm = i;
            break;
        }
    }

    cout << "LCM = " << lcm;

    return 0;
}