#include<iostream>
#define PI 3.14
using namespace std;

int main()
{
    int r;
    cout<<"Enter the Radius of Circle:";
    cin>>r;

    cout<<"Diameter is:"<<2*r<<endl;
    cout<<"Circumference is:"<<2*PI*r<<endl;
    cout<<"Area is:"<<PI*r*r<<endl;
    return 0;
}