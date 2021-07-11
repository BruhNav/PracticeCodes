#include<iostream>

struct User
{
	std::string first_name;
	std::string last_name;
	std::string get_status()
	{
		return status;
	}
	private:
		std::string status="gold";
};


int main()
{
	User user1;
	std::cout<<user1.get_status()<<std::endl; 

return 0;
}