#include<iostream>
using namespace std;
int main()
{
    int j;
    int a,b;
    cout<<"enter the starting number and the ending number"<<endl;
    cin>>a>>b;
    for (int i = a; i <= b; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i%j==0)
            {
                cout<<i<<endl;
                break;    
            }
        
        }
        
    }
    return 0;
}