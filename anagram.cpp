#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1, s2;
    cout<<"Enter first string: ";
   cin>>s1;
    cout<<"Enter second string: ";
    cin>>s2;
    if(s1.length()!=s2.length()){
        cout<<"Not Anagram strings"<<endl;
        return 0;
    }

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    
    if(s1==s2){
        cout<<"Strings are Anagram"<<endl;
    }
    else{
        cout<<"Strings are not Anagram"<<endl;
    }
    return 0;
}