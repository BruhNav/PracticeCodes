#include<bits/stdc++.h>



using namespace std;
int main()
{
	long long int n;
	long long int taken;
	cin>>n;
	long long int a[n];
	for(long long int i=0;i<n;i++)cin>>a[i];
	cin>>taken;


	sort(a,a+n);
	// for (int i = 0; i < amount; ++i)
	// {
	// 	cout<<items[i]<<endl;
	// }
	int sum=0;

	for (long long int i = 0; i < taken; i++)
	{
		sum=sum+a[i];
	}
	
	cout<<sum<<endl;



return 0;
}
