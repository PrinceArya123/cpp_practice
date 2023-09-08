#include<iostream>
using namespace std;
int main(){
    int array1[]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        int min=array1[0];
        if(array1[i]<min){
            min=array1[i];
        }
    }
    cout<<"Minimum value of array1 is: "<<min<<endl;
    return 0;
}