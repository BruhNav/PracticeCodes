#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the number of lines to be printed"<<endl;
	cin>>n;
	for (int i = n; 0<i; i--)
	{
		for (int j = i; 0 < j;j--)
		{
			cout<<'*';
		}
		cout<<endl;
		
	}
	

return 0;
}