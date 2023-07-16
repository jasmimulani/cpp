#include<iostream>
using namespace std;
int m,s,e,t;
float per;
int display()
{
    cout<<"maths"<<"\tsci"<<"\teng"<<"\ttotal"<<"\tper";
    cout<<"\n"<<m<<"\t"<<s<<"\t"<<e<<"\t"<<t<<"\t"<<per<<"\t";

}
  int calc (){
    t= m+ s + e;
    per=(float)t/3;
    display();
  }
  int setdata(){
    cout<<"enter maths marks";
    cin>>m;
    cout<<"enter sci marks";
    cin>>s;
    cout<<"enter eng marks";
    cin>>e;
    calc();
  }
     int main(){
        setdata();
     }
