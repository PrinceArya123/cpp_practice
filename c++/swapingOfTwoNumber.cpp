#include<iostream>
using namespace std;
int main(){
    cout<<"before swaping"<<endl;
    int a,b,temp;
    cout<<"a:";
    cin>>a;
    cout<<"b:";
    cin>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"after swaping"<<endl;
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    return 0;
}