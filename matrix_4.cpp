#include<iostream>
using namespace std;
int main()
{
    int a[3][3],i,j,diagonal=0,upper=0,lower=0;
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            cout<<"enter value";
            cin>>a[i][j];
        }
    }
      for(i=0; i<4; i++)
      {
        for(j=0; j<4; j++)
        {
            cout<<a[j][i];
            if(i==j)
            {
                diagonal=diagonal+a[i][j];
            }
             else if(i<j)
             {
                upper=upper+a[i][j];
             }
             else{
                lower=lower+a[i][j];
             }
        }
           cout<<"\n";
      }
      cout<<diagonal;
      cout<<upper;
      cout<<lower;
}