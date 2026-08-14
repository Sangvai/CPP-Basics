#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"enter string: ";
    getline(cin, s);

    int start=0;
    int minlength=s.length();
    string min="";
    for(int i=0; i<= s.length(); i++){
        if(s[i]==' ' || i==s.length()){
            int length = i- start;
            if(length< minlength){
                minlength= length;
                min=s.substr(start, length);
            }
            start =i+1;
        }
    }
    cout<<"shortest substring is: "<<min<<endl<<"Length of shortest substring is: "<<minlength;
    return 0;
}