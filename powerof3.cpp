#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int temp=n;
    if(n<=0){
        cout<<"not a power of 3";
        return 0;
    }
    
    while(n%3==0){
        n=n/3;
    }
    if(n==1){
        cout<<temp<<" is a power of 3";
    }
    else{
        cout<<temp<<" is not a power of 3";
    }
    return 0;
}