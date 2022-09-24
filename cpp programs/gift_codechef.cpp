#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t = 1;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		string s;
		cin >> s;
		int x = 0, y = 0;
		for (int i = 0; i < n; i++)
		{
			if (i == n - 1)
			{
				if (s[i] == 'L')
				{
					if (s[i - 1] != 'L')
					{
						x -= 1;
					}
				}
				if (s[i] == 'R')
				{
					if (s[i - 1] != 'R')
					{
						x += 1;
					}
				}
				if (s[i] == 'U')
				{
					if (s[i - 1] != 'U')
					{
						y += 1;
					}
				}
				if (s[i] == 'D')
				{
					if (s[i - 1] != 'D')
					{
						y -= 1;
					}
				}
			}
			else
			{
				if (s[i] == 'L')
				{
					if (s[i + 1] != 'L')
					{
						x -= 1;
					}
				}
				if (s[i] == 'R')
				{
					if (s[i + 1] != 'R')
					{
						x += 1;
					}
				}
				if (s[i] == 'U')
				{
					if (s[i + 1] != 'U')
					{
						y += 1;
					}
				}
				if (s[i] == 'D')
				{
					if (s[i + 1] != 'D')
					{
						y -= 1;
					}
				}
			}
		}

		cout << x << " " << y << endl;
	}

	return 0;
}
