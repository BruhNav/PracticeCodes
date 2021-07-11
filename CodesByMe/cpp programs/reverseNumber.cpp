#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"enter the number to be reversed"<<endl;
	cin>>a;

	int reverse=0;
	
	while (a>0)
	{
		int lastdigit=a%10;
		reverse=reverse*10 + lastdigit;
		a=a/10;
	}
	cout<<reverse;
return 0;
}