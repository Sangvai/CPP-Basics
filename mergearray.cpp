#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m, a[100], b[100], c[200];
    cout<<"enter number of elements in first array: ";
    cin>>n;
    cout<<"Enter number of elements in second array: ";
    cin>>m;
    cout<<"Enter elements of 1st array: ";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<"Enter elements of 2nd array: ";
    for(int i=0; i<m; i++){
        cin>>b[i];
    }
    for(int i=0; i<n; i++){
        c[i]= a[i];
    }
    for(int i=0; i<m; i++){
        c[i+n]= b[i];
    }

    for(int i=0; i<n+m; i++){
        cout<<c[i]<<" ";

    }
    return 0;
}