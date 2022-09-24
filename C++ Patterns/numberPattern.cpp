#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"enter the size of the pyramid"<<endl;
	cin>>a;

	for (int i = a; i > 0; i--)
	{
		for (int k = i; k > 0; k--)
		{
			cout<<" ";
		}
		
		for (int j = 0; j <= (a-i); j++)
		{
			cout<<j+1<<" ";
		}
		cout<<endl;
	}
	
return 0;
}