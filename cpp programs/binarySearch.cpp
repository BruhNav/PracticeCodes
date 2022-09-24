//binary search is faster than linear search 
#include<iostream>
using namespace std;
int binarySearch(int arr[], int n, int key){
	int s=0;
	int e=n;

	while (s<=e)
	{
		int mid=(s+e)/2;
		if (arr[mid]==key)
		{
			return mid;
		}
		else if (arr[mid]>key)
		{
			e=mid-1;
		}
		else
		{
			s=mid+1;
		}
		
	}
	return -1;
}
int main()
{
	int a;
	cout<<"enter the length of the array"<<endl;
	cin>>a;

	int arr[a];
	cout<<"enter the elements of the array"<<endl;
	for (int i = 0; i < a; i++)
	{
		cin>>arr[i];
	}
	int key;
	cout<<"enter the key to be searched"<<endl;
	cin>>key;
	cout<<binarySearch(arr,a,key)+1<<endl;

return 0;
}