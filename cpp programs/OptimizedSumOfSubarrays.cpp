// this function takes the input as a length of the array and the array also the 
// desired number to be obtained as the sum of any sub array from the given array
//and gives the starting and the ending index of the subarray
#include<iostream>
using namespace std;
int main()
{
	int n,s;
	cin>>n>>s;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin>>a[i];
	}
	int i=0,j=0,st=-1,en=-1,sum=0;

	while (j<n && sum+a[j]<=s)//the operations in the conditions are just 
	{						  //a test the origanl value is unchanged here
		sum+=a[j];
		
			j++;
	}
	
	if(sum==s)
	{
		cout<<i+1<<" "<<j<<endl;
	return;
	}

	while (j<n)
	{
		sum+=a[j];
		while (sum>s)
		{
			sum-=a[i];//removing the extra term from the begining 
			i++;	  //one by one to see if the result equals the sum
		}

		if(sum==s)
		{
			st=i+1;
			en=j+1;//due to zero indexing of the arrays
			break;
		}
		j++;
	}
	
	cout<<st<<" "<<en<<endl;

return 0;
}