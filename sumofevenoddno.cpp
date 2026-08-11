#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int even=0, odd=0;
    while(n!=0){
        int digit= n%10;
        if(digit%2==0){
            even= even + digit;
        }
        else{
            odd= odd+ digit;
        }
        n= n/10;

    }
    cout<<"Sum of even digits: "<<even<<endl;
    cout<<"Sum of odd digits: "<<odd<<endl;
    
    return 0;
}