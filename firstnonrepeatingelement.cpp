#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ,arr[100];
    cout<<"enter no of array elements:";
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
     bool found = true;

     for(int i=0; i<n; i++){
     int count =0;
    
      for(int j=0; j<n; j++){
        if (arr[i]==arr[j])
            {
                count++;
                
            }
        
    }  
    if(count==1){
        cout<<"First non repeating array elemnt is: "<<arr[i];
        found= false;
        break;
    } 
    }
    if(found){
        cout<<"No non repeating element found. ";
    }
    return 0;
}