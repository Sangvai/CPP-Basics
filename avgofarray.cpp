#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, arr[100];
    int sum=0;
    cout<<"Enter the size of the array: ";
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    double avg= sum/n;
    cout<<"Average of the array elements is: "<<avg<<endl;
    return 0;
}