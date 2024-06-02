#include<iostream>
using namespace std;

int main()
{
    int a,b;
    char oper;
    cout<<"Enter first number:";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;
    cout<<"Enter the operation(+,-,*,/,%):";
    cin>>oper;

    switch(oper)
    {
        case '+':
            cout<<"Result:"<<a+b<<endl;
            break;
        case '-':
            cout<<"Result:"<<a-b<<endl;
            break;
        case '*':
            cout<<"Result:"<<a*b<<endl;
            break;
        case '/':
            cout<<"Result:"<<a/b<<endl;
            break;
        case '%':
            cout<<"Result:"<<a%b<<endl;
            break;
        default:
            cout<<"Invalid operation";
            break;
    }
    return 0;
}