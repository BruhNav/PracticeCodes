#include<iostream>

int gcd(int a , int b){
    if(b==0)
    return a;
    else 
    return gcd(b,a%b);
}

using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
return 0;
}