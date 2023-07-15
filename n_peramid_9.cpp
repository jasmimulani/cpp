#include<iostream>
using namespace std;
int main()
{
   
    char j,i,n='A';
    for(i='A'; i<='E'; i++)
    {
        for(j='A'; j<=i; j++)
        {
            cout<<n++;
        }
          cout<<"\n";
    }
}