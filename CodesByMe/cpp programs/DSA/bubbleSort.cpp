#include<iostream>
#define ll long long

using namespace std;
int main()
{
	cout<<"size:"<<endl;
	int n;
	cin>>n;

	int arr[n];

	cout<<"array elements:"<<endl;

	for(int i=0; i<n;i++){
		cin>>arr[i];
	}
	for(int j=0;j<n;j++)
	{
		for(int i=0; i<n-1-j ;i++){
			if (arr[i]>arr[i-1])
			{
				int swap=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=swap;
			}

		}
	}

	cout<<"the sorted array"<<endl;
for (int i = 0; i < n; i++)
{
	cout<<arr[i]<<endl;
}


return 0;
}