#include<iostream>
using namespace std;
int power();
int main(){
    int ans= power();
    cout<<"Result is: "<<ans<<endl;
    return 0;
}
int power(){
    int a, b;
    cin>>a>>b;
    int result = 1;
    for(int i=0; i<b; i++){
        result *= a;
    }
    return result;
}