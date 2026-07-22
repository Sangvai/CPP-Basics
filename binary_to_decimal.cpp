#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter a binary number: ";
    cin >> n;

    int ans = 0;
    int i = 0;

    while(n != 0) {
        int bit = n % 10;   // CHANGED

        if(bit == 1) {
            ans = ans + pow(2, i);
        }

        n = n / 10;         // CHANGED
        i++;
    }

    cout << "Decimal: " << ans << endl;

    return 0;
}