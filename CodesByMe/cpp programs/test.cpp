#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll input;
        cin>>input;
		ll k = log2(input);
		if (k % 2 !=0 || input % 2 != 0 || input<3)
		cout<<"Bob"<<endl;

		else
		cout<<"Alice"<<endl; 
    }
}