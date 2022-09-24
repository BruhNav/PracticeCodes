#include<iostream>
#include<string>
template<typename T>
void swap(T &x,T &y)
{
	T temp=x;
	x=y;
	y=temp;
}
// void swap(string &a,string &b)
// {
// 	string temp=a;
// 	a=b;
// 	b=temp;
// }
int main()
{
	int a=20,b=30;
	swap(a,b);
	std::cout<<a<<std::endl<<b<<std::endl;
	std::string first_name="pranav";
	std::string last_name="jaiswal";
	swap(first_name,last_name);
	std::cout<<first_name<<" "<<last_name<<std::endl;
	//as you can see i used swap for two different data types 
	//with the use of templatized data type function
	
return 0;
}