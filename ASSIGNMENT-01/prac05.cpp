#include<iostream>
using namespace std;

int main()
{
    int a1,a2,a3,total;
    cout<<"Enter the length of first side:";
    cin>>a1;
    cout<<"Enter the length of second side:";
    cin>>a2;
    cout<<"Enter the length of third side:";
    cin>>a3;

    if(a1==a2==a3){
        cout<<"it is a equilateral traingle"<<endl;
    }
    else if(a1==a2 ||a2==a3 ||a3==a1){
        cout<<"it is a isosceles triangle"<<endl;
    }
    else{
        cout<<"it is a scalene triangle"<<endl;
    }

    return 0;
}