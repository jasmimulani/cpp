#include<iostream>
using namespace std;
 struct bill{
     float rate,qty,amt,dis,billamt,gst,netbill;
     int productno;
     char name[50];
 };
 int main(){
    struct bill a[10];
    int i;
    for(i=0; i<5; i++)
    {
        cout<<"enter productno:";
        cin>>a[i].productno;
        cout<<"enter name:";
        cin>>a[i].name;
        cout<<"enter qty:";
        cin>>a[i].qty;
        cout<<"enter rate:";
        cin>>a[i].rate;
    }
    cout<<"\nproductno"<<"name\t"<<"qty\t"<<"rate\t"<<"dis\t"<<"billamt\t"<<"gst\t"<<"netbill\t";
    for(i=0; i<5; i++)
    {
        a[i].amt=a[i].qty*a[i].rate;
        a[i].dis=(a[i].amt*5)/100;
        a[i].billamt=a[i].amt-a[i].dis;
        a[i].gst=(a[i].billamt*18)/100;
        a[i].netbill=a[i].billamt+a[i].gst;
        cout<<"\n"<<a[i].productno<<"\t"<<a[i].name<<"\t"<<a[i].qty<<"\t"<<a[i].amt<<"\t"<<a[i].dis<<"\t"<<
        a[i].billamt<<"\t"<<a[i].gst<<"\t"<<a[i].netbill<<"\t";
    }
 }