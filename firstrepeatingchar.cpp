#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"enter string: ";
    getline(cin, s);
    bool found=false;
    for(int i=0; i<=s.length(); i++){
        for(int j=i+1; j<= s.length(); j++){
            if(s[i]==s[j]){
                cout<<"First repeating character is: "<<s[i];
                found=true;
                break;
                
            }
        }
        if(found){
        break;
        }
    } 
    if(!found){
        cout<<"No repeating character in the string.";
    }
    return 0;
}