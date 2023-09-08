#include<iostream>
using namespace std;
int main(){
     int array[]={3,7,18,9,11};
     int max=array[0];
     for(int i=0;i<5;i++){
        if(array[i]>max){
            max=array[i];
        }
     }
     cout<<"maximum value is: "<<max<<endl;
     int min=array[0];
     for(int i=0;i<5;i++){
        if(array[i]<min){
            min=array[i];
        }
     }
     cout<<"Minimum valuen is: "<<min<<endl;
     int sum=max+min;
     cout<<"sum of maximum and minimum vlue of array ia: "<<sum<<endl;
}