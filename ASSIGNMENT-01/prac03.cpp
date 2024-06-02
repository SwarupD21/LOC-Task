#include<iostream>
using namespace std;

int main()
{
    float length;
    cout<<"Enter the length in Centimetre:";
    cin>>length;

    cout<<"Length in metre:"<<length/100<<endl;
    cout<<"Length in kilometre:"<<length/100000<<endl;
    return 0;
}