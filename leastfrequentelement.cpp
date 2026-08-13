#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, arr[100];
    cout<<"enter no of array elements: ";
    cin>>n;
   
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int least= n;
    int element= arr[0];

    for( int i=0; i<n; i++){
        int count =0;
        for(int j=0; j<n; j++){
            if(arr[i]==arr[j]){
                count ++;
            }
        }

        if(count < least){
            least = count;
            element= arr[i];
        }
        
    }
    cout<<"Least frequent element is: "<< element <<endl;
    cout<<"Frequency of least frquent element is: "<<least;
    return 0;
}