#include<iostream>
using namespace std;
int main()
{
    int a[4][4],i,j;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
           cout<<"enter any number";
           cin>>a[i][j];
        }
    }
     for(i=0; i<3; i++)
     {
        for(j=0; j<3; j++)
        {
            if(a[i][j]==0)
            {
                cout<<" ";
            }
            else
            {
                cout<<a[i][j];
            }
        }
             cout<<"\n";
     }
}