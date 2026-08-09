#include<bits/stdc++.h>
using namespace std;
int main(){
    int v=0, c=0;
    string s;
    cout<<"Enter a string: ";
    getline(cin, s);
    for(int i=0; i<s.length(); i++){
        if((s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')||(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')){
            v++;
        }
        else if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){
            c++;
        }
    }
    cout<<"Number of vowels: "<<v<<endl;
    cout<<"Number of consonants: "<<c<<endl;
    return 0;
}