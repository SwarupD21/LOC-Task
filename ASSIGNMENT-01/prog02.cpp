#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    if(n>0){
        cout<<n<<" is a Positive Number";
    }
    else if(n=0){
        cout<<"Zero";
    }
    else{
        cout<<n<<" is a Negative Number";
    }
}