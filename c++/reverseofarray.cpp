#include<iostream>
using namespace std;
/*function to reverse arr[] from start to end*/
void reverseArray(int arr[],int start,int end)
{
    while (start<end)
    {
      int temp=arr[start];
      arr[start]=arr[end];
      arr[end]=temp;
      start++;
      end--;
    }
    
}
/*utility function to print an array*/
void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
/*driver function to test above function*/
int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    //to print an original array
    printArray(arr,n);
    //function calling
    reverseArray(arr,0,n-1);
    cout<<"Reverse array is"<<endl;
    //to print the reverse array
    printArray(arr,n);
    return 0;
}