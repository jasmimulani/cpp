#include<iostream>
using namespace std;
int fib (int n)
{
    if(n==0)
    {
        return 1;
    }
     else if(n==1)
     {
        return 1;
     }
     else{
        return fib(n-1)+fib(n-2);
     }
}
  int main(){
    int i,j;
    cout<<"enter a number:";
    cin>>j;
    for(i=0; i<j; i++)
    {
        cout<<fib(i)<<"\t";
    }
  }