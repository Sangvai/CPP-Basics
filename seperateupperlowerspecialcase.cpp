#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"enter string: ";
    cin>>s;
    int upper=0, lower=0, digit=0, special=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]>='A' && s[i]<='Z'){
            upper++;
        }
        else if(s[i]>='a' && s[i]<='z'){
            lower++;
        }
        else if(s[i]>='0' && s[i]<='9'){
            digit++;
        }
        else{
            special++;
        }
    }

    cout<<"upper case: "<<upper<<endl;
    cout<<"lower casse: "<<lower<<endl;
    cout<<"digits :"<<digit<<endl;
    cout<<"special characters: "<<special<<endl;
    return 0;
}