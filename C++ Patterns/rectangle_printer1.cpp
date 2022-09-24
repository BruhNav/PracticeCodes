#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"enter the value of m rows and n columns"<<endl;
    cin>>m>>n;
    
    for (int i = 0; i < m; i++)
    {
        if ((i==0)||(i==m-1))
        {
            for (int i = 0; i < n; i++)
        {
            cout<<"*";
        }
        cout<<endl;
        continue;
        }
    for (int i = 0; i < n; i++)
    {
        if ((i==0)||(i==n-1))
        {
            cout<<"*";
            continue;
        }
        cout<<" ";
    }
    
        
        
        cout<<"\n";
    }
    

return 0;
}