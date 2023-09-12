#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter size of array=";
    cin>>size;
    int array[size];
     cout<<"Enter element of array ";
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    int max=array[0];
    for(int i=0;i<size;i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    cout<<"Maximum value of array is : "<<max;
    return 0;

}