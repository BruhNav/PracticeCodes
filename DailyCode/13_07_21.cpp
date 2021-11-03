#include<iostream>

// 1546A - AquaMoon and Two Arrays

using namespace std;
int main()
{
	int t;cin>>t;while(t--){
		int n;cin>>n;
		int a[n];
		int b[n];
		int sumA=0;
		int sumB=0;
		
		for (int i = 0; i < n; i++)
		{
			cin>>a[i];
			sumA+=a[i];
		}
		for (int i = 0; i < n; i++)
		{
			cin>>b[i];
			sumB+=b[i];
		}

		if(sumA!=sumB) cout<<-1<<endl;
		
		else{
			int main_diff=0;
			for (int i = 0; i < n; i++)
			{
				if((a[i]-b[i])<0){
					cout<<i;
				}
				if((a[i]-b[i])>0){
					cout<<i<<endl;
				}
			}
		}

		

		
		
	}
return 0;
}