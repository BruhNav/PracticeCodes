#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"enter the size of the pattern"<<endl;
	cin>>a;
	for (int i = 0; i <= a; i++)
	{
		for (int j = 0; j <= 2*a; j++)
		{
			if ((j<=0+i)||(j>=(2*a)-i))
			{
				cout<<"*";
			continue;
			}
			cout<<" ";
		}
		cout<<endl;
		
	}
	for (int i = 0; i <= a; i++)
	{
		for (int j = 0; j <= 2*a; j++)
		{
			if ((j<=0+i)||(j>=(2*a)-i))
			{
				cout<<" ";
			continue;
			}
			cout<<"*";
		}
		cout<<endl;
		
	}
	
return 0;
}