#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, arr[100];

    cout<<"Enter array size: ";
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int temp= arr[0];
    for(int i=0; i<n; i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
    cout<<"Array after left shift: ";
    for(int i= 0; i<n; i++){
            cout<<arr[i]<<" ";

    }
    
    return 0;
}