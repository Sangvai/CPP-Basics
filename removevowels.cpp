#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;

    cout << "Enter the string: ";
    getline(cin, s);

    for (int i = 0; i < s.length(); i++) {

        if (s[i] != 'A' && s[i] != 'E' && s[i] != 'I' &&
            s[i] != 'O' && s[i] != 'U' &&
            s[i] != 'a' && s[i] != 'e' && s[i] != 'i' &&
            s[i] != 'o' && s[i] != 'u') {

            cout << s[i];
        }
    }

    return 0;
}
