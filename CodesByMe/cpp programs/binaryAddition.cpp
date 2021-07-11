#include<iostream>
using namespace std;
int binAdd(int b1 ,int b2){
	int r=0,i=0;
	int ans[20];
	while (b1!=0||b2!=0)
	{
		ans[i++]=(((b1%10)+(b2%10)+r)%2);
		r=(((b1%10)+(b2%10)+r)/2);
		b1/=10;
		b2/=10;
	}
	if (r!=0)
	{
		ans[i++]=1;	
	}
	while (i>=0)
	{
		cout<<ans[i--];
	}
	cout<<endl;
	return 0;	
}
int main()
{
	int a,b;
	cin>>a>>b;
	binAdd(a ,b);

return 0;
}