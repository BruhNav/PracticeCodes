#include<iostream>
#include<cmath>
using namespace std;
int decimalToBinary(int a){
	int k, bin=0;
	for (int i = 0; a > 0; i++)
	{
		k=a%2;//to make it decimal to octal replace 2
		a=a/2;//with 8
		bin+=k*(pow(10,i));
	}
	return bin;
	

}
int main()
{
	int n;
	cin>>n;
	
	cout<<decimalToBinary(n)<<endl;

return 0;
}