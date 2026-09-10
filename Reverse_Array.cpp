#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[], int n){
    int start=0, end= n-1;
    while(start <= end){
        swap(arr[start], arr[end]);
        start++;
        end--;
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
    reverse(brr, p);
    reverse(arr, n);
    printArray(arr, n);
    printArray(brr, p);
    return 0;

}