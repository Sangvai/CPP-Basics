#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, arr[100];
    cout<<"enter no of array elements: ";
    cin>>n;
    double sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum= sum+ arr[i];
    }
    double avg= sum/n;
    cout<<"Elemnets which are greater than average are: ";
    for(int i=0; i<n; i++){
        if(arr[i]> avg){
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
    return 0;

}