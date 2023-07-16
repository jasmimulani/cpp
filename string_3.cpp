#include<iostream>
using namespace std;
int main()
{
    char a[20];
    int i=0,j;
    cout<<"enter string:";
    cin>>(a);
    while(a[i]!='\0')
    {
        i++;
    }
    for(j=0; j<(i/2); i++)
    {
        cout<<a[j]<<a[i-j-1];
    }
       if(i%2!=0)
       {
        cout<<a[i/2];
       }
}