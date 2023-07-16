#include<iostream>
using namespace std;
int main()
{
    char str[20],a[20];
    int j,k;
    cout<<"enter a string:";
    cin>>str;
    int i=0; 
    while(str[i]!='\0')
    {
        i++;
        j=i;
    }
      for(k=0; k<i; k++)
      {
         a[k]=str[--j];
      }
       a[k]='\0';
       cout<<a;
       
}
