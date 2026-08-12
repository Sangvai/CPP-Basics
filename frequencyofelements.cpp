#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, arr[100], x, count =0;
    cout<<"enter number of array elements: ";
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"enter number to find frquency: ";
    cin>>x;
    for(int i=0; i<n; i++){
        if(arr[i]== x)
        count ++;
    }
    cout<<"Frequency of element "<<x<<" : "<<count;
    return 0;
}