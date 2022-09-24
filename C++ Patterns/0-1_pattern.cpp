#include<iostream>
using namespace std;
int main()
{
	int a,k;
	cout<<"enter the value of columns to be printed"<<endl;
	cin>>a;
	

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if ((i+j)%2==0)
			{
				k=1;
			}
			else if ((i+j)%2!=0)
			{
				k=0;
			}
			
			
			cout<<k;
		}
		cout<<endl;
	}
	

return 0;
}