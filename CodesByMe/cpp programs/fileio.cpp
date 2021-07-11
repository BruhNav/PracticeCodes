#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
int main()
{
	string filename;
	cin>>filename;
	ofstream file(filename.c_str(),ios::app);
	if(file.is_open())
	{
		cout<<"done"<<endl;
	}
	vector<string> names;
	names.push_back("pranav");
	names.push_back("bruh");
	names.push_back("bruhnav");
	for(string n : names)
	{
		file<<n<<endl;//note that I printed "n" not "names"
	} 
	file.close();
return 0;
}