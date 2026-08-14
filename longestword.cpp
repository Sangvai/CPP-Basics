#include<bits/stdc++.h>
using namespace std;
int main(){
    //int maxlength=0;
    string s;
    cout<<"enter string:";
    getline(cin,s);
    int start=0; 
    int maxlength=0;
    string max="";
    for(int i=0; i<=s.length(); i++){
        if(s[i]==' ' || i==s.length()){
        int length=i-start;
           if(length>maxlength){
            maxlength= length;
            max=s.substr(start, length);
           }
           start= i+1;
        }
    }
    cout<<"Max subtring: "<<max<<endl;
    cout<<"length of max substring: "<<maxlength;
    return 0;
}