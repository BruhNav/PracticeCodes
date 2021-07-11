#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,sum=0;
	cout<<"enter the number to be checked"<<endl;
	cin>>a;
	int on=a;
	while (a>0)
	{
		int lastdigit=a%10;
		sum = sum + pow(lastdigit,3);
		a = a/10;
		
	}
	if (sum==on)
	{
		cout<<"this number is an armstrong number";
	}
	else
	{
		cout<<"this number is not an armstrong number"<<endl;
	}
	
	

return 0;
}