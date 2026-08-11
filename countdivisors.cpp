#include <iostream>
using namespace std;

int main() {
    int x, n;
    
    cout << "Enter base: ";
    cin >> x;

    cout << "Enter power: ";
    cin >> n;

    int result = 1;

    for(int i = 1; i <= n; i++) {
        result = result * x;
    }

    cout << x << " raised to the power of " << n << " is: " << result;

    return 0;
}