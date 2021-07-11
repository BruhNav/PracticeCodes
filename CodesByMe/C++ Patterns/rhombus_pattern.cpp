#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter the number of rows and colums"<<endl;
	cin>>a>>b;

	for (int i = a; i > 0; i--)
	{
		for (int k = i; k > 0; k--)
		{
			cout<<" ";
		}
		
		for (int j = 0; j < b; j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	

return 0;
}