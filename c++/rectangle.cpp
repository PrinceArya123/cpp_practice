#include<iostream>
using namespace std;
int area(int length,int bredth){
  int ar=length*bredth;
  return ar;
}
int circum(int length,int bredth){
  int cir=2*(length+bredth);
  return cir;
}
int main(){
  int length,bredth;
  cout<<"enter the length of rectangle : ";
  cin>>length;
  cout<<"enter the bredth of rectangle : ";
  cin>>bredth;
  cout<<"Area of rectangle is : "<<area(length,bredth)<<endl;
  cout<<"Circumference of rectangle is : "<<circum(length,bredth)<<endl;
  return 0;
}