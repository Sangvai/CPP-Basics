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
    int arr[]={1, 2, 3, 4, 5};
    int brr[]  ={6, 7, 8, 9, 10};   
    int n= sizeof(arr)/sizeof(int);
    int p= sizeof(brr)/sizeof(int);
    swapAlternate(brr, p);
    swapAlternate(arr, n);
    printArray(arr, n);
    printArray(brr, p);
    return 0;

}