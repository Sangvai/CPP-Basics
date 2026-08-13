#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, x, arr[100];
    cout<<"enter number of array elements: ";
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"enter element to find occurence: ";
    cin>>x;
    for(int i=0; i<n; i++){
        if(arr[i]==x){
            cout<<"First occurence of "<<x<<"is: "<<i;
        }
    }
    return 0;
}