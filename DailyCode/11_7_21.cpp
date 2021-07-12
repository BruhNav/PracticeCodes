#include<iostream>
#include<string>
//1547B - Alphabetical Strings Codeforces

using namespace std;

	

int main()
{
	
	int k;
	cin>>k;
	while(k--){
		string input;

		cin>>input;

		int length=input.length();
		while(length){
			if(input[length-1]=='a'+length-1) input.erase(length-1,1);
			else if (input[0]=='a'+length-1) input.erase(0,1);
			length--;
		}
		if(input=="") cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		
	}
return 0;
}