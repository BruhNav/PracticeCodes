#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
	int t;
	for (int i = 0; i < t; i++)
	{
		int n;
		int x=0,y=0;
		cin>>n;
		string move;
		getline(cin,move);
		for (int i = 0; i<n; i++)
		{
			if ((move[i]=='L')&&(move[i-1]=='R'||move[i-1]=='L'))
			{
				x=x+0;
			}
			if ((move[i]=='R')&&(move[i-1]=='R'||move[i-1]=='L'))
			{
				x=x+0;
			}
			if ((move[i]=='U')&&(move[i-1]=='U'||move[i-1]=='D'))
			{
				y=y+0;
			}
			if ((move[i]=='D')&&(move[i-1]=='U'||move[i-1]=='D'))
			{
				y=y+0;
			}
			if (move[0]=='L')
			{
				x--;
			}
			if (move[0]=='R')
			{
				x++;
			}
			if (move[0]=='U')
			{
				y++;
			}
			if (move[0]='D')
			{
				y--;
			}
			if ((move[i]=='L')&&(move[i-1]!='R'||move[i-1]!='L'))
			{
				x--;
			}
			if ((move[i]=='R')&&(move[i-1]!='R'||move[i-1]!='L'))
			{
				x++;
			}
			if ((move[i]=='U')&&(move[i-1]!='U'||move[i-1]!='D'))
			{
				y++;
			}
			if ((move[i]=='D')&&(move[i-1]!='U'||move[i-1]!='D'))
			{
				y--;
			}

			
		}
		
	cout<<x<<" "<<y<<endl;
		

	}
	

return 0;
}