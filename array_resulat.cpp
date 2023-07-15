#include<iostream>
using namespace std;
int main()
{
     int a[5],b[5],c[5],d[5],i,total,per,grade;
     for(i=1; i<=5; i++)
     {
        cout<< "enter guj marks";
        cin>>a[i];
     }
     cout<<"\n";
      for(i=1; i<=5; i++)
      {
        cout<<"enter maths marks";
        cin>>b[i];
      }
      cout<<"\n";
      for(i=1; i<=5; i++)
      {
        cout<<"enter sci marks";
        cin>>c[i];
      }
        cout<<"\n";
        for(i=1; i<=5; i++)
        {
          cout<<"enter english marks";
          cin>>d[i];       
        }
         cout<<"\n";
         cout<<"\n guj\tmaths\tsci\tenglish\ttotal\tper\tgrade";
         for(i=1; i<=5; i++)
         {
          total=a[i]+b[i]+c[i]+d[i];
          per=total*100/400;
          cout<<"\n"<<a[i]<<"\t"<<b[i]<<"\t"<<c[i]<<"\t"<<d[i]<<"\t"<<total<<"\t"<<per<<"\t";
          if(a[i]<=35)
          {
            cout<<"fail";
          }
          else if(b[i]<=35)
          {
            cout<<"fail";
          }
          else if(c[i]<=35)
          {
            cout<<"fail";
          }
          else if(d[i]<=35)
          {
            cout<<"fail";
          }
          else if(per>75)
          {
            cout<<'A';
          }
          else if(per>60&&per<=75)
          {
            cout<<'B';
          }
          else if(per>45&&per<=60)
          {
            cout<<'C';
          }
          else if (per>35&&per<=45)
          {
            cout<<'D';
          }
          else 
          {
            cout<<"fail";
          }
         }    
     
}