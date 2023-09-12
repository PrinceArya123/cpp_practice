#include<iostream>
using namespace std;
int main(){
    int n=5;
    //for loop to do some task for reach line
    for(int line=0;line<n;line++){
        //spaces for the current line
        for(int i=0;i<n;i++){
            if(i==n/2){
                cout<<"*";
            }else if(line==n/2){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}