#include<bits/stdc++.h>
using namespace std;
int getMAX(int num[], int n){
    int max= num[0];
    for(int i=0; i<n ; i++){
        if(num[i]> max){
            max=num[i];
        }
    }
    return max;
}
int getMIN(int num[], int n){
    int min= num[0];
    for(int i=0; i<n ; i++){
        if(num[i]< min){
            min=num[i];
        }
    }
    return min;
}

int main(){
    int n,num[100];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>num[i];
    }
    cout<<"Maximum value is: "<<getMAX(num, n)<<endl;
    cout<<"Minimum value is: "<<getMIN(num, n)<<endl;
}