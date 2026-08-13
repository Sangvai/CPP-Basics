#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, arr[100];
    cout<<"enter size of an array: ";
    cin>>n;
    int j=-1;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    if(j!=-1)
    for(int i=j+1; i<n; i++){
        if(arr[i]!=0){
            swap(arr[j], arr[i]);
            j++;
        }
    }
    for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
    }
    return 0;
}