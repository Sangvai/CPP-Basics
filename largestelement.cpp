#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[100], n;
    cout<<"Enter size of array: ";
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    cout<<"Largest element is: "<<arr[n-1]<<endl;
    return 0;
}