#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t;
	for (int i = 0; i < t; i++)
	{

		int n;
		int x=0,y=0;
		cin>>n;
		string a;
		cin>>a;
		for (int i = 0; i < a.length(); i++)
		{
			if (a[0]=='L')
			{
				x--;
			}
			if (a[0]=='R')
			{
				x++;
			}
			if (a[0]=='U')
			{
				y++;
			}
			if (a[0]=='D')
			{
				y--;
			}
			if (a[i]=='L'&&(a[i+1]=='L'||a[i+1]=='R'))
			{
				a.erase(i+1);
				continue;
			}
			if (a[i]=='R'&&(a[i+1]=='L'||a[i+1]=='R'))
			{
				a.erase(i+1);
				continue;
			}
			if (a[i]=='U'&&(a[i+1]=='U'||a[i+1]=='D'))
			{
				a.erase(i+1);
				continue;
			}
			if (a[i]=='D'&&(a[i+1]=='U'||a[i+1]=='D'))
			{
				a.erase(i+1);
				continue;
			}
			if (a[i]=='L'&&(a[i+1]!='L'&&a[i+1]!='R'))
			{
				x--;
			}
			if (a[i]=='R'&&(a[i+1]!='L'&&a[i+1]!='R'))
			{
				x++;
			}
			if (a[i]=='U'&&(a[i+1]!='U'&&a[i+1]!='D'))
			{
				y++;
			}
			if (a[i]=='D'&&(a[i+1]!='U'&&a[i+1]!='D'))
			{
				y--;
			}
			
			
			
			
		}
		cout<<x<<" "<<y<<endl;

	}
	

return 0;
}