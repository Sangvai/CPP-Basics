#include<bits/stdc++.h>
using namespace std;
int main(){ 
    int n, a[100];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
sort(a, a+n);
cout<<"sorted array without duplicates is:";

for(int i=0; i<n; i++){
if(a[i]!=a[i-1] || i==0 ){
    cout<<a[i]<<" ";
}
}
    return 0;
}
