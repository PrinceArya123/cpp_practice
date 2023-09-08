#include<iostream>
using namespace std;
int main(){
    int n;
     
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" integers:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int even_count=0;
    int odd_count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even_count++;
        }
        else{
            odd_count++;
        }
    }
    cout<<"Number of even integers is: "<<even_count<<endl;
    cout<<"Number of odd integers is: "<<odd_count<<endl;
    return 0;

}