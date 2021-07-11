#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"enter the size of the pyramid"<<endl;
	cin>>a;

	for (int i = 1; i <= a; i++)
	{
		for (int k = a-i; k > 0; k--)//space printer in each line
		{
			cout<<" ";
		}
		int k=i;
		for (int j = 0; j < i; j++)//this loop prints the numbers upto one 
		{
			
			cout<<k--;
					
		}
		k=2;
		for (int p = 0; p < i-1; p++)//this loop copleters the previous loop by printing the number after 1
		{
			cout<<k++;
		}
		
		cout<<endl;
	}
	
return 0;
}