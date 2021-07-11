#include<iostream>
using namespace std;
bool check(int a, int b, int c){
	int x,y,z;
	x= max(a,max(b,c));
	if (x==a)
	{
		y=b;
		z=c;
	}
	else if (x==b)
	{
		y=c;
		z=a;
	}
	else
	{
		y=a;
		z=b;
	}
	if((x*x)==(y*y)+(z*z)){
		return 1;
	}
	else
	{
		return 0;
	}
	
	
	
}
int main()
{
	int x,y,z;
	cin>>x>>y>>z;


	if (check(x,y,z))
	{
		cout<<"it is a pythgorean triplet"<<endl;
	}
	else
	{
		cout<<"not a pythagorian triplet"<<endl;
	}
	


return 0;
}