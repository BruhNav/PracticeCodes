#include<bits/stdc++.h>

using namespace std;
int hexaToDecimal(string a){
	int s = a.size();
	int deci=0;
	
	
	for (int i = s-1; i>=0; i--)
	{
		if (a[i]>='0'&& a[i]<='9')
		{
			deci+= a[i]*pow(16,(s-1-i));

		}
		else if (a[i]>='A'&& a[i]<='F')
		{
			deci+= (a[i]-'A'+10)*pow(16,(s-1-i));
		}
		
	}
	return deci;
	
}
int main()
{
	string n;
	cin>>n;
	cout<<hexaToDecimal(n)<<endl;

return 0;
}