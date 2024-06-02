#include<iostream>
using namespace std;

int main()
{
    int m1,m2,m3,m4,m5;
    int tot,avg,per;
    cout<<"Enter the mark First subject:";
    cin>>m1;
    cout<<"Enter the mark Second subject:";
    cin>>m2;
    cout<<"Enter the mark Third subject:";
    cin>>m3;
    cout<<"Enter the mark Fourth subject:";
    cin>>m4;
    cout<<"Enter the mark Fifth subject:";
    cin>>m5;

    tot=m1+m2+m3+m4+m5;
    cout<<"Total mark is:"<<tot<<endl;
    avg=tot/5;
    cout<<"Average is:"<<avg<<endl;
    per=avg;
    cout<<"Percentage is:"<<per<<"%"<<endl;

    return 0;
}

