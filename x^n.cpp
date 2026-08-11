#include<iostream>
using namespace std;
int main(){
    int x,n;
    cout<<"Enter a power number: ";
    cin>>n;
    cout<<"Enter the base number: ";
    cin>>x;
    int result=1;
    for(int i=1; i<=n; i++){
        result= result* x;
    }
   cout<<"Result of "<<x<<" raised to the power of "<<n<<" is: "<<result;
    return 0;
}