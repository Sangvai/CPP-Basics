#include<iostream>
using namespace std;
int main(){
    char ch;
    int a, b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"enter an operator (+, -, *, /): ";
    cin>>ch;
    switch(ch){
        case '+':
            cout<<"Addition: "<<a+b<<endl;
            break;
        case '-':
            cout<<"Subtraction: "<<a-b<<endl;
            break;
        case '*':
            cout<<"Multiplication: "<<a*b<<endl;
            break;
        case '/':
            cout<<"Division: "<<a/b<<endl;
            break;
        default:
            cout<<"Invalid operator"<<endl;
    }
}