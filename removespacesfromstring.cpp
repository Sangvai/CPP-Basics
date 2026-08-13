#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter string";
    getline(cin, s);
    for(int i=0; i<s.length(); i++){
        if(s[i]!=' '){
            cout<<s[i];
        }
    }
    return 0;
}