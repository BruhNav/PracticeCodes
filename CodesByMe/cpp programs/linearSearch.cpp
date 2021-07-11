#include<iostream>
using namespace std;
int linearSearch(int arr[],int a,int key){
	for (int i = 0; i < a; i++)
	{
		if (arr[i]==key)
		{
			return i+1;
		}
		
	}
	return -1;
}
int main()
{
	int n;
	cout<<"enter the size of the array"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter the numbers"<<endl;
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}

	int key;
	cout<<"enter the number to be searched"<<endl;
	cin>>key;
	cout<<"the index of the given number is :"<<linearSearch(arr,n,key)<<endl;

	
	
return 0;
}