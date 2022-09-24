#include<iostream>
#include<string>



using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string k;
        cin>>k;
        int aCount=0;
        int bCount=0;
        int cCount=0;
        for (int i = 0; i < k.length(); i++)
        {
            if(k[i]=='A') aCount++;
            if(k[i]=='B') bCount++;
            if(k[i]=='C') cCount++;

        }
        if(aCount+cCount==bCount) 
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
        

    }
return 0;
}