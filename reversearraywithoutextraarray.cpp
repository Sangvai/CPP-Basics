#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, arr[100];

    cout<<"Enter array size: ";
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int i=0;
    int j=n-1;

    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;

        i++;
        j--;
    }

    cout<<"Reversed array: ";

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}