#include<bits/stdc++.h>



using namespace std;
int main()
{

	int n; 
	cout<<"enter the size"<<endl;
	cin>>n;

	int swap;	
	int arr[n];
	cout<<"elements:"<<endl;
	for(int i=0;i<n; i++)
	{
		cin>>arr[i];
	}

	for(int i = 0 ; i<n-1 ; i++){
		for (int j=i+1 ; j<n; j++){
			if(arr[j]<arr[i])
			{
				swap=arr[i];
				arr[i]=arr[j];
				arr[j]=swap;
			}
		}
	}

	cout<<"here is the sorted array"<<endl;


	for(int i=0; i<n;i++){
		cout<<arr[i]<<endl;
	}
	


return 0;
}