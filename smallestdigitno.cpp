#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    int smallest=9;
    while(n!=0){
        int digit=n%10;
        if(digit<smallest){
            smallest=digit;
        }
        n=n/10;
    }
    cout<<"Smallest digit in number is: "<<smallest;
    
    return 0;
}