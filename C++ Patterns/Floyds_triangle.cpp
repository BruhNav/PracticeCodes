#include<iostream>
using namespace std;
int main()
{
	int n;
	int k=0;
	cout<<"enter the number of lines to be printed"<<endl;
	cin>>n;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			k=++k;
			cout<<k<<" ";
		}
		cout<<endl;
	}
	
return 0;
}