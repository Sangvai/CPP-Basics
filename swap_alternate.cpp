#include<bits/stdc++.h>
using namespace std;
void swapAlternate(int arr[], int n){
    for(int i=0; i<n-1; i=i+2){
        swap(arr[i], arr[i+1]);
    }
    
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n, arr[100];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    swapAlternate(arr, n);
    printArray(arr, n);
    
    return 0;

}