#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   cout<<"even elements in an array are: ";
   for(int i=0; i<n; i++){
    if(arr[i]%2==0){
        cout<<arr[i]<<" ";
    }
   }
   cout<<endl<<"odd elements in an array are:  ";
   
   for(int i=0; i<n; i++){
    if(arr[i]%2!=0){
        cout<<arr[i]<<" ";
    }
   }
   return 0;
}