#include<iostream>
using  namespace std;
int main()
{
    int x,y,z;
    cout<<"enter x:";
    cin>>x;
    cout<<"enter y:";
    cin>>y;
    z=x;
    x=y;
    y=z;
    cout<<"\n value is"<<x;
    cout<<"\n value is"<<y;
    
}