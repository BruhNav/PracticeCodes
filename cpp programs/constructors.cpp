#include<iostream>
using namespace std;

class User
{
	public:
		string first_name;
		string last_name;
		long long roll_no;
	User(string first_name, string last_name)
	{
		this->first_name=first_name;//the one one the left of equal sign is the 
		this->last_name=last_name;//one taken by constructor and the other is from class
	}
	~User()
	{
		cout<<"destructor"<<endl;
	}
};

int main()
{
	User me("Pranav","Jaiswal");
	me.roll_no=201000038;
	cout<<me.first_name<<endl;
	cout<<me.last_name<<endl;
	cout<<me.roll_no<<endl;


return 0;
}