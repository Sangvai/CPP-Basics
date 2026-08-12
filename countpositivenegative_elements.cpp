#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int positive=0,negative=0,zero=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0){
            positive++;
        }
        else if(arr[i]<0){
            negative++;
        }
        else{
            zero++;
        }
    }
    
    cout<<"Positive elements: "<<positive<<endl;
    cout<<"Negative elements: "<<negative<<endl;
    cout<<"Zero elements: "<<zero<<endl;
}