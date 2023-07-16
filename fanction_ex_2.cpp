#include<iostream>
using namespace std;
int d2(int d)
{
    int i,n=0;
    for(i=1; i<d; i++)
    {
        if(d%i==0)
        {
            n=n+i;
            cout<<i;
        }
    }
    if(d==n)
    {
        cout<<"number is perfect"<<n;
    }
    else
    {
        cout<<"number is not perfect"<<n;
    }
}
  int main(){
    cout<<"welcome:"<<"\n";
    int d;
    cout<<"enter d:";
    cin>>d;
    d2(d);
  }
