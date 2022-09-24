#include<iostream>
using namespace std;
bool isprime(int k){
	for (int i = 2; i < k; i++)
	{
		if (k%i==0)
		{
			return false;//the funuction will stop immidiatly as it meets the 
		}                //return statement hence no break statement is needed here.
	}
	return true;
}
int main()
{
	int a,b;
	cin>>a>>b;
	for (int i = a; i < b; i++)
	{
		if (isprime(i))
		{
			cout<<i<<endl;
		}
		
		
		
	}
	
return 0;
}