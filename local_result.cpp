#include<iostream>
using namespace std;
int display (int maths, int sci, int english, int total, float per)
{
    cout<<"maths\t"<<"sci\t"<<"english\t"<<"total\t"<<"per\t";
    cout<<"\n"<<maths<<"\t"<<sci<<"\t"<<english<<"\t"<<total<<"\t"<<per<<"\t";
}
int calc (int maths, int sci, int english)
{
    int total;
    float per;
    total=maths+sci+english;
    per=(float)total/3;
    display(maths,sci,english,total,per);
}
 int setdata()
 {
    int maths,sci,english;
    cout<<"enter maths marks:";
    cin>>maths;
    cout<<"enter sci marks:";
    cin>>sci;
    cout<<"enter english marks:";
    cin>>english;
    calc(maths,sci,english);
 }
  int main(){
    setdata();
  }