#include<bits/stdc++.h>

using namespace std;

// 1547C - Pair Programming UNSOLVED

int main(){
	int T; cin>>T;
	while (T--)
	{
		
		int k,n,m; cin>>k>>n>>m;

		vector<int> wrong_sequence;
		vector<int> right_sequence;

		int size = m+n;
		int loop=m+n;
		int no_of_zeros=0;
		while(size--){
			int input; cin>>input;

			if(input==0) 
				no_of_zeros++;
			else
				wrong_sequence.push_back(input);
		}

		int max= *max_element(wrong_sequence.begin(),wrong_sequence.end());

		int i=0;

		if(no_of_zeros+k<max) cout<<-1;
		

		else if(no_of_zeros+k>=max){


			while(loop--){

				

				if(*min_element(wrong_sequence.begin(),wrong_sequence.end())<=k){
					right_sequence.push_back(*min_element(wrong_sequence.begin(),wrong_sequence.end()));
					*min_element(wrong_sequence.begin(),wrong_sequence.end())=INT_MAX;
				}
				else if(*min_element(wrong_sequence.begin(),wrong_sequence.end())==INT_MAX){
					right_sequence.push_back(0);
				}
				else if(*min_element(wrong_sequence.begin(),wrong_sequence.end())>k
					  &&*min_element(wrong_sequence.begin(),wrong_sequence.end())!=INT_MAX){
					k++;
					right_sequence.push_back(0);
				}

			}
		}
		for(auto i: right_sequence){
			cout<<i;
		}
		cout<<endl;


	}
	return 0;
	
}