#include<iostream>
using namespace std;

int main()
{
    int a1,a2,a3,total;
    cout<<"Enter the first angle:";
    cin>>a1;
    cout<<"Enter the second angle:";
    cin>>a2;
    cout<<"Enter the third angle:";
    cin>>a3;

    total=a1+a2+a3;
    if(total==180){
        cout<<"Triangle is valid"<<endl;
    }
    else{
        cout<<"Triangle is invalid"<<endl;
    }

    return 0;
}