#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"enter a string: ";
    cin>>s;
    string a="";
    for(int i=s.length()-1; i>=0; i--){
        a+=s[i];
    }
    if(s==a){
        cout<<"palindrome string"<<endl;
    }
    else{
        cout<<"not a palindrome string"<<endl;
    }
    return 0;
}