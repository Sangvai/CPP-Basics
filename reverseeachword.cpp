#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"enter string: ";
    getline(cin, s);
    int start =0 ;
    for(int i=0; i<= s.length(); i++){
        if(s[i]==' '|| i== s.length()){
            for(int j=i-1; j>= start ; j--){
                cout<<s[j];
            }

            if(i != s.length()){
                cout<<" ";
            }
            start= i+1;
        }
    }
}