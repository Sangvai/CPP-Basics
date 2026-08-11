#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, gcd=1;
    cout << "Enter two numbers: ";
    cin >> a >> b;  
    for(int i=1; i<=min(a,b); i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    int lcm= (a*b)/gcd;
    cout << "GCD is: " << gcd << endl;
    cout << "LCM is: " << lcm << endl;
    return 0;
}