#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int prod =1;
     
    while(n!=0){
        int digit= n%10;
        prod= prod* digit;
        n=n/10;
    }
    cout<<"Product of digits of number : "<<prod;
    return 0;
}