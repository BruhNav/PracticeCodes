#include<iostream>
using namespace std;
int fac(int a){
	int k=1; 
	for (int i = 1; i <= a; i++)
	{
	k= k*i;
	}
	return k;
}
int main()
{
	int n;
	cin>>n;
	int ans=fac(n);
	cout<<ans<<endl;
return 0;
}