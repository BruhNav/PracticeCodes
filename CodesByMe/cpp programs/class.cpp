#include<iostream>
#include<vector>
#define pb push_back

class User
{
	std::string status="gold";

	public:
	std::string first_name;
	std::string last_name;
	std::string get_status()
	{
		return status;
	}
};
int add_user_if_not_exists(std::vector<User> &users,User user)
{
	for (int i=0;i<users.size();i++)
	{
		if(users[i].first_name==user.first_name&&users[i].first_name==user.first_name)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	std::vector<User>users;
	users.pb(User());

	User user, user1,user2,user3;
	user.first_name="pranav";
	user.last_name="jaiswal";

	user1.first_name="barbara";
	user1.last_name="palvin";

	user2.first_name="dakota";
	user2.last_name="jhonsson";

	user3.first_name="pranav";
	user3.last_name="jaiswal";

	users.pb(user1);
	users.pb(user2);
	users.pb(user3);

	std::cout<<add_user_if_not_exists(users,user)<<std::endl;



	//User() here is contructor here


return 0;
}