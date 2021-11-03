#include<iostream>

// 1547A - Shortest Path with Obstacle

using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int xo,yo;
		int xd,yd;
		int xf,yf;

		cin>>xo>>yo>>xd>>yd>>xf>>yf;

		if(xo==xd && xo==xf && ((yo>yf && yf>yd)||(yo<yf && yf<yd))) 
		cout<<(abs(yo-yd)+2)<<endl;
		else if(yo==yd && yo==yf && ((xo>xf && xf>xd)||(xo<xf && xf<xd))) 
		cout<<(abs(xo-xd)+2)<<endl;
		else
		cout<<abs(xo-xd)+abs(yo-yd)<<endl;
	}
return 0;
}