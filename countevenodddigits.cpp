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
            even= even + 1;
        }
        else{
            odd= odd+ 1;
        }
        n= n/10;

    }
    cout<<"Number of even digits: "<<even<<endl;
    cout<<"Number of odd digits: "<<odd<<endl;
    
    return 0;
}