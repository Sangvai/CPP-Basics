#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, arr[100];
    cout<<"enter no of array elements: ";
    cin>>n;
   
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
     int maxcount =0;
    int mostfrequent= arr[0];
    for(int i=0; i<n; i++){
        int count =0;
        for(int j= i; j< n; j++){
            if (arr[i]== arr[j]){
                count++;
                
            }
        }
       if(maxcount<count){
        maxcount= count;
        mostfrequent = arr[i];

       }
    
    }
    cout<<"Most frequent element of an array: "<<mostfrequent<<endl;
    cout<<"count of most frequent element: "<<maxcount;
    
    
    return 0;

}