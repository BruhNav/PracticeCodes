#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"enter the size of the pattern"<<endl;
	cin>>a;
	// lets take an example as a = 3 then the pattern will be like
	// 	  j===123456
		// i1 *    *
		// i2 **  **
		// i3 ******
		// i4 ******
		// i5 **  **
		// i6 *    *
		//for i=0 the pattern will be *    * ie j<=1 and j>=6 will print
		//for i=1 the pattern will be **  ** ie j<=2 and j>=5 will print
		//for i=2 the pattern will be ****** ie j<=3 and j>=3 will print
	for (int i = 0; i <= a; i++)
	{ 

		for (int j = 0; j <= 2*a; j++)
		{
			if ((j<=0+i)||(j>=(2*a)-i))
			{
				cout<<"*";
			continue;
			}
			cout<<" ";
		}
		cout<<endl;
		
	}
	for (int i = a; i >= 0; i--)
	{
		for (int j = 0; j <= 2*a; j++)
		{ 
			if ((j<=i)||(j>=(2*a)-i))//for i=a-0 the pattern will be ****** with star ie j<=3 also j>=3
			{                        //for i=a-1 the pattern will be **  ** ie j<=2 and j>=5 will print
				cout<<"*";           //for i=a-2 the pattern will be *    * ie j<=1 and j>= 6 will print
			continue;
			}
			cout<<" ";
		}
		cout<<endl;
		
	}
	
return 0;
}