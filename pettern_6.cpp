#include<iostream>
using namespace std;
int main()
{
    int i,j,sp=25;
    for(i=5; i>=1; i--)
    {
        for(j=sp; j>=i; j--)
        cout<<" ";
        for(j=i; j>=1; j--)
        {
            cout<<"*";
        }
         cout<<"\n";
    }
}