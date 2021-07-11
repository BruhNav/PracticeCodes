#include<iostream>
using namespace std;
int main()
{
    int rows,columns;
    cout<<"enter the value of rows and columns";
    cin>>rows>>columns;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if ((j==0)||(i==0)||(j==columns-1)||(i==rows-1))
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