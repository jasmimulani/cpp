#include<iostream>
using namespace std;
int i,j,sp=25;
int main()
{
    for(i=1; i<=4; i++)
    {
        for(j=1; j<=sp; j++)
        cout<<" ";
        for(j=1; j<=i; j++)
        {

            cout<<"* ";
        }
           cout<<"\n";
           sp--;
    }        
      sp+=2;
     for (i=3; i>=1; i--)
    {
        for(j=sp; j>=1; j--)
        cout<<" ";
        for(j=i; j>=1; j--)
        {

            cout<<"* ";
        }
           cout<<"\n";
           sp++;
    } 
}          

    