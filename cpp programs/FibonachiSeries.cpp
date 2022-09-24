#include<iostream>
using namespace std;
void fib(int a){
	int t1=0;
	int t2=1;
	int nextTerm;
	for (int i = 0; i < a; i++)
	{
		nextTerm = t1 + t2;
		cout<<nextTerm<<endl;
		t1=t2;
		t2=nextTerm;
	}
	return;
}

int main()
{
	int a;
	cin>>a;

	fib(a);

return 0;
}