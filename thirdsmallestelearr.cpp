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
    cout<<"The third smallest element is: "<<arr[2]<<endl;
    return 0;
}