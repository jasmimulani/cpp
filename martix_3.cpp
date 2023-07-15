#include<iostream>
using namespace std;
int main()
{
    int i,n,a[5][5],total=0;
    for(i=0; i<3; i++)
    {
        for(n=0; n<3; n++)
        {
            cout<<"enter a value";
            cin>>a[i][n];        
        }
    }    
        for(i=0; i<3; i++)
        {
            for(n=0; n<3; n++)
            {
             if(i==n)
            {
                cout<<a[i][n];
             }
             else
             {
                cout<<a[i][n];
                total=total+i;
             }
                cout<<total;
            }
            cout<<"\n";

        }
}

