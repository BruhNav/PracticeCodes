#include<iostream>

//this algorithm is used to find gcd of two numbers

using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    
    while(a!=b)
    {
        if(a>b) 
        a=a-b;
        else 
        b=b-a;
    }
    cout<<a<<endl;
return 0;
}