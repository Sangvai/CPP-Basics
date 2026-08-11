#include<bits/stdc++.h>
using namespace std;
int main(){
    
    string s;
    cout<<"Enter the string:";
    cin>>s;
    int n=s.length();
    string ans="";
    for(int i=0; i<n; i++){
        bool found = false;
        for(int j=0; j<ans.length(); j++){
            if(s[i]==ans[j]){
                found=true;
                break;
            }
        }
        if(!found){
            ans = ans+ s[i];

        }
        
    }
    cout<<ans;
    return 0;
}