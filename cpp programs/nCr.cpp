#include<iostream>
using namespace std;
int fact(int a){
	int k=1; 
	for (int i = 1; i <= a; i++)
	{
	k= k*i;
	}
	return k;
}
int main()
{
	int n,r;
	cin>>n>>r;

	int ans= fact(n)/(fact(r)*fact(n-r));
	cout<<ans<<endl;
return 0;
}