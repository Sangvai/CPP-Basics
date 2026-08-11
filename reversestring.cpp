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
    cout<<"reversed string: "<<a<<endl;
    return 0;
}