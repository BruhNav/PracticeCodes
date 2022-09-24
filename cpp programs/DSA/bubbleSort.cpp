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

	int j=1;
	while(j<n)
	{
		for(int i=0; i<n-j ;i++){
			if (arr[i]>arr[i+1])
			{
				int swap=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=swap;
			}

		}
		j++;
	}

	cout<<"the sorted array"<<endl;
for (int i = 0; i < n; i++)
{
	cout<<arr[i]<<endl;
}


return 0;
}