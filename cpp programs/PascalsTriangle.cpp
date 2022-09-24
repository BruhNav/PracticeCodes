#include<iostream>
using namespace std;
int fac(int a){
	
	int k=1;
	
	
	for (int i = 1; i <= a; i++)
	{
		k=k*i;
	}
	return k;
}
int C(int a , int b){
	int c;
	c=fac(a)/(fac(a-b)*fac(b));
	return c;
}
int main()
{
	int a;
	cout<<"enter the length of pascals triangle"<<endl;
	cin>>a;
	for (int i = 0; i <= a; i++)
	{
		for (int j = 0; j <= i; j++)
		{ 
			cout<<C(i,j)<<" ";
		}
		cout<<endl;
	}
	

return 0;
} 