#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"value of n"<<endl;
	cin>>n;
	int a[n];
	cout<<"enter the value of the array"<<endl;
	for (int i = 0; i < n; i++)
	{
		cin>>a[i];
	}
	for (int i = 0; i < n; i++)
	{
		cout<<"for number from"<<a[i]<<endl;
		int curr=0;
		for (int j = i; j < n; j++)
		{
			curr=curr+a[j];
			cout<<curr<<endl;
		}
		
	}
	
	
return 0;
}