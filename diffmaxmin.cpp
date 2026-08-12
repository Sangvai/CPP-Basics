#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, arr[100];
    cout<<"Enter the size of the array: ";
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    cout<<"The difference between maximum and minimum elements is: "<<arr[n-1]-arr[0]<<endl;
    return 0;
}