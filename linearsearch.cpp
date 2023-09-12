#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of an array=";
    cin>>n;
    cout<<"Enter element of an array : ";
     int array[n];
     for(int i=0;i<n;i++){
        cin>>array[i];
     }
     int key;
     cout<<"Finding number=";
     cin>>key;
     int ans=-1;
     for(int i=0;i<5;i++){
        if(array[i]==key){
            ans=i;
        }
     }
     cout<<ans<<endl;
     return 0;
}
