#include<iostream>
#include<cmath>
int BtoD(int n){
		
	int deci=0,k;
	
	for (int i = 0; n>0; i++)
	{
		k=n%10;
		deci+=(k*pow(2 ,i));//to make it an octal to decimal replace 2 with 8
		n=n/10;
	}
	return deci;
}
using namespace std;
int main()
{
	int a;
	cout<<"enter the binary number"<<endl;
	cin>>a;
	cout<<BtoD(a)<<endl;


return 0;
}