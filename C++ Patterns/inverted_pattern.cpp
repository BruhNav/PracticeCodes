#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"enter the amount of columns to be printed"<<endl;
	cin>>a;

	
	for (int i = a; i > 0; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			cout<<j;
		}
		cout<<endl;
	}
	

return 0;
}