#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[100], n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    cout<<"Smallest element is: "<<arr[0]<<endl;
    return 0;
}