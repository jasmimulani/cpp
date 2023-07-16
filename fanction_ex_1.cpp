#include<iostream>
using namespace std;
int f1()
{
    int r=0,n;
    cout<<"enter value";
    cin>>n;
    while(n!=0)
    {
        r=r*10+n%10;
        n/=10;
    }
     cout<<r;
}
     int main(){
     
       f1();
     }