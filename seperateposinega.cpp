#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, arr[100];
    cout<<"Enter the number of elements: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"positive elements in array are: ";
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl<<"Negative elemets in an array are: ";
    for(int i=0; i<n; i++){
        if(arr[i]<0){
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl<<"zero elements in an array are: ";
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}