#include<iostream>
#include<cmath>
using std::cout;
using std::cin;
using std::endl;
using std::max;
int main()
{
	int n;
	cin>>n;
	int a[n];

	a[n+1];
	a[n]=-1;//the number next to the last day whose indput is already declared
			//which ensures that the day next to the last day is always smaller ie -1

	for (int i = 0; i < n; i++)
	{
		cin>>a[i];
	}
	if (n==1)
	{
		cout<<"1"<<endl;
		return 0;
	}
	int ans=0;
	int mx=-1;

	for (int i = 0; i < n; i++)
	{
		if(a[i]>mx&&a[i]>a[i+1])
		{
			ans++;
		}
		mx=max(mx,a[i]);
	
	}
cout<<ans<<endl;
return 0;
}