#include<iostream>
#include<climits>
using namespace std;
int main()
{
	int n,a;
	cout<<"enter the value of n"<<endl;
	cin>>n;
	int k[n];
	cout<<"enter the elements of the array"<<endl;
	for (int i = 0; i < n; i++)
	{
		 cin>>k[i];
	}
	cout<<"enter the value of a"<<endl;
	int maxtill=INT_MIN;
	for (int i = 0; i < n; i++)
	{	
		a=max(maxtill,k[i]);
		cout<<"the max number till"<<i+1<<"="<<a<<endl;
		maxtill=a;
	}
	
return 0;
}