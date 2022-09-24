#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the size"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter the elements of array"<<endl;
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	// the idea is to compare the first number with the other next to it
	// if any number is smaller than the first number that number is swapped
	// with the first number and then comparison of next number is made from the 
	// numbers next to it and same swapping is followed until the last number of the 
	// given array until then all the numbers of this array are arranged in ascending order
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (arr[j]<arr[i])
			{
				int temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
			
		}
		
		
	}
	cout<<"the sorted array is"<<endl;
		for (int i = 0; i < n; i++)
		{
			cout<<arr[i]<<endl;
		}


return 0;
}