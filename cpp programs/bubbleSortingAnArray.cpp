#include<iostream>
using namespace std;
int main()
{
	int n,temp;
	cout<<"enter the size of the array"<<endl;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	
	int counter=1;
	// for n elements the number of iterations are n-1 as after 
	//each sorting the last element of the unsorted array is sorted 
	while (counter<n)
	{
		for (int i = 0; i < n-counter; i++)
		{
			if (arr[i+1]<arr[i])
			{
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
			
		}
		counter++;
	}
	for (int i = 0; i < n; i++)
	{
		cout<<arr[i]<<endl;
	}

return 0;
}
// this method is known as bubble sort because the largest element in 
//the unorderd array comes at the last in each cycle like a bubble 