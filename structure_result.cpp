#include<iostream>
using namespace std;
struct student {
    int rollno;
    char name[50];
    int m,s,e,t;
    float per;
};
int main(){
    struct student a[5];
    int i;
    for(i=0; i<2; i++)
    {
        cout<<"roll number:"; 
        cin>>a[i].rollno;
        cout<<"enter name:";
        cin>>a[i].name;
        cout<<"enter maths marks:";
        cin>>a[i].m;
        cout<<"enter sci marks:";
        cin>>a[i].s;
        cout<<"enter english:";
        cin>>a[i].e;
    }  
      cout<<"\n"<<"rollno\t"<<"name\t"<<"maths\t"<<"sci\t"<<"english\t"<<"total\t"<<"per\t";
      for(i=0; i<2;i++)
      {
        a[i].t=a[i].m+a[i].s+a[i].e;
        a[i].per=(a[i].t)/3;
        cout<<"\n"<<a[i].rollno<<"\t"<<a[i].name<<"\t"<<a[i].m<<"\t"<<a[i].s<<"\t"<<a[i].e<<"\t"<<a[i].t
        <<"\t"<<a[i].per<<"\t";
      }     
        
}
