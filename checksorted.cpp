#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, arr[100];
    cout<<"Enter number of array elements: ";
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    bool sorted= true;
    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
        sorted= false;
        break;
        }
    }
    if(sorted){
    cout<<"sorted array";
    }
    else{
    cout<<"Array not sorted";
    }
    return 0;

}