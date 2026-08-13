#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"enter string: ";
    getline(cin, s);
    bool digit= true;
    for(int i=0; i<s.length(); i++){
        if(s[i]<'0' || s[i]> '9'){
            digit= false;
        }
    }
    if(digit){
        cout<<"String contains only digits.";
    }
    else{
        cout<<"String does not contain only digits.";
    }
    return 0;
}