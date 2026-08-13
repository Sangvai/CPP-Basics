#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, arr[100];
    cout<<"enter no of array elements: ";
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        int count =0;
        for(int j= i+1; j< n; j++){
            if (arr[i]== arr[j]){
                count ++;
                break;
            }
        }
        if(count > 0){
            cout<<"Repeating element: "<< arr[i];
            break;
        }
    
    }
    
    
    return 0;

}