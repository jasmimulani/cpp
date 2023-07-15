#include<iostream>
using namespace std;
int main()
{
    int i,n;
    for(i=0; i<3; i++)
    {
        for(n=0; n<3; n++)
        {
            if(i==n)
            {
                cout<<i;
            }
            else
            {
                cout<<0;
            }
        }
        cout<<"\n";

    }
}