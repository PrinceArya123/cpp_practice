#include<iostream>
using namespace std;
void pascal_triangle(int n){
    int array[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(i==j || j==0){
                array[i][j]=1;
            }
            else{
                array[i][j]=array[i-1][j-1]+array[i-1][j];
            }
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter value of n : ";
    cin>>n;
    pascal_triangle(n);
    return 0;
}
