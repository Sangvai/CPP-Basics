#include<bits/stdc++.h>
using namespace std;
int getMAX(int num[], int n){
    int maxi= INT_MIN;
    for(int i=0; i<n; i++){
        maxi= max(maxi, num[i]);
    }
    return maxi;
}

int getMIN(int num[], int n){
    int mini= INT_MAX;
    for(int i=0; i<n; i++){
        mini= min(mini, num[i]);
    }
    return mini;
}

int main(){
    int n, num[100];
    cin>>n;
    for(int i=0; i<n ;i++){
        cin>>num[i];
    }
    cout<<"Maximum value is: "<<getMAX(num, n)<<endl;
    cout<<"Minimum value is: "<<getMIN(num, n)<<endl;
}