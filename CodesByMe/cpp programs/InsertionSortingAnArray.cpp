#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the size of the array"<<endl;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	for (int i = 1; i < n; i++)
	{
		int current=arr[i];
		int j=i-1;
		while (arr[j]>current && j>=0)
		{
			arr[j+1]=arr[j];
			j--;//this line shifts the pointer of j to the prvious number then the prviousnumber is relocated and 
				// same thing is followd over and over again until the index of the given array is reaced zero
		}		
		arr[j+1]=current;
	}
	cout<<"the sorted array is :"<<endl;
	for (int i = 0; i < n; i++)
	{
		cout<<arr[i]<<endl;
	}
	
	
return 0;
}