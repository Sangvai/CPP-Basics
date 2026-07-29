#include<iostream>
using namespace std;
int power(int a, int b);
int main(){
    int a, b;
    cin>>a>>b;

power(a, b);
    return 0;
}
int power(int a, int b){
    int result = 1;
    for(int i=0; i<b; i++){
        result *= a;
    }
    cout<<"Result: "<<result<<endl;
    return result;
}