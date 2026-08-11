#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[100], n;
    cout<<"enter size of array: ";
    cin>>n;
    int sum=0;
    for(int i=0; i<n-1; i++){
        cin>>arr[i];
        sum = sum+ arr[i];
    }

    int total= n*(n+1)/2;
    int missing= total - sum;
    cout<<"missing element is: "<<missing<<endl;    
    return 0;
}
