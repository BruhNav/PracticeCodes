#include<iostream>

const int N = 1e5 + 10;
int M = 1e9 + 7;
long long fact[N];

using namespace std;
int main()
{
    fact[1]=1;
    fact[0]=fact[1];

    for (int i = 2; i <= N; i++)
    {
        fact[i]=(fact[i-1]*i)%M;
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        cout<<(fact[2*n]/2)<<endl;
    }
return 0;
}