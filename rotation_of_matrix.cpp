#include<iostream>
#include<vector>  //create an empty integer vector
#include<algorithm>  //for swap and reverse keyword
using namespace std;

void rotateArray(vector<vector<int>>&vec){
    int n=vec.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            //transpose
            swap(vec[i][j],vec[j][i]);
        }
    }
    //reverse every rows3
    for(int i=0;i<n;i++){
        reverse(vec[i].begin(),vec[i].end());
    }
    return;
}
int main(){
    int n;
    cout<<"Enter size of square matrix : ";
    cin>>n;
    vector<vector<int>>vec(n,vector<int>(n));
    cout<<"Enter element of vector : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
             
            cin>>vec[i][j];
        }
    }
    cout<<"Rotataion of matrix is : "<<endl;
    rotateArray(vec);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
