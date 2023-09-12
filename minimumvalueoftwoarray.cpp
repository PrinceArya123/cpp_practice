#include<iostream>
using namespace std;
int minSum(int arr1[],int arr2[],int n)
{
    int min1=arr1[0];
    for(int i=0;i<n;i++){
        if(arr1[i]<min1){
            min1=arr1[i];
        }
    }
    int min2=arr2[0];
    for(int i=0;i<n;i++){
        min2=arr2[i];
    }
     int sum=min1+min2;
    return sum;
}
int main(){
    int arr1[]={5,4,3,8,1};
    int arr2[]={2,3,4,9,2};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    cout<<minSum(arr1,arr2,n);
}