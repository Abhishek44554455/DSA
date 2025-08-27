#include<iostream>
using namespace std;

// a
// ab
// abc
int main(){
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            char c='a'+j-1;
            cout<<c<<" ";
        }
        cout<<endl;
    }
}