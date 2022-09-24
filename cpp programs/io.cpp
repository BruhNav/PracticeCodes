#include<bits/stdc++.h>
using namespace std;
int main()
{
	ifstream file("new");

	if(file.is_open())
	{
		cout<<"done"<<endl;
	}

	vector<string> names;
	string input;
	while(file>>input) 
	{
		names.push_back(input);
	}
	for(string n:names)
	{
		cout<<n<<endl;
	}
return 0;
}