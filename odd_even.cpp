#include<iostream>
using namespace std;
int main()
{
    int i, arr[6],oddtotal=0,eventotal=0;
    for(i=0; i<=6; i++)
    {
        cout<<"enter any number";
        cin>>arr[i];
    }
      for(i=0; i<=6; i++)
       {
             if(i%2==0)
           {
            oddtotal=oddtotal+arr[i];
            cout<<arr[i];
           }
       
        else
          {
            eventotal=eventotal+arr[i];
            cout<<arr[i];
          }
       }      
        cout<<"\t"<<oddtotal;
        cout<<"\t"<<eventotal;
     
}