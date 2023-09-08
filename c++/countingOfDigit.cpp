#include<iostream>
using namespace std;
int main(){
     int n,count;
     cout<<"enter a number=";
     cin>>n;
     count=0;
     while(n>0){
        count++;
        n/=10;
     }
     cout<<count<<endl;
    return 0;
}