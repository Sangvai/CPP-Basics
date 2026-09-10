#include<bits/stdc++.h>
using namespace std;

bool search( int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}

int main(){
    int n, arr[100], key;
    cout<<"enter size of array: ";
    cin>>n;
    cout<<"enter key to search: ";
    cin>>key;
    cout<<"enter elements of array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    bool found= search(arr, n, key);
    if(found){
        cout<<"key is present in the array";
    }
    else{
        cout<<"key is not present in the array";
    }
}