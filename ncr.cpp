#include<iostream>
using namespace std;

int factorial(int n)
{
    int fact =1;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}
int comb(int n,int r)
{
    int num = factorial(n);
    int denom=(factorial(r)*factorial(n-r));
    int ans = num/denom;
    return ans;
}
int main(){
    int n;
    cin>>n;
    int r;
    cin>>r;
   cout<<"Answer is "<<comb(n,r);
   return 0;
}