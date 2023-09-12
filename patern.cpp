#include<iostream>
using namespace std;
int main(){
    int n=5;
    //loop to print upper triangle
    for(int line=1;line<=n;line++){
     //loop to print spaces
     int no_of_spaces=(n-line);
     for(int k=0;k<no_of_spaces;k++){
        cout<<" ";
     }
        int no_of_chars=2*line-1;
        for(int j=0;j<no_of_chars;j++){
            char ch=(char)('A'+j);
            cout<<ch;
        }
        cout<<endl;
    }
    //loop to print lowe triangle
    for(int line=n+1;line<=2*n-1;line++){
        int no_of_spaces=(line-n);
        for(int k=0;k<no_of_spaces;k++){
            cout<<" ";
        }
        int no_of_chars=2*(2*n-line)-1;
        for(int j=0;j<no_of_chars;j++){
            cout<<(char)('A'+j);
        }
        cout<<endl;
    }
}