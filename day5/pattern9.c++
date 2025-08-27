#include<iostream>
using namespace std;
int main(){
    int totalRow=5;
    for(int row=1;row<=totalRow;row++){
        //space//
        for(int col=1;col<=totalRow-row;col++){
            cout<<" ";
        }
        for(int col=1;col<=row;col++){
            cout<<"*"<<" "<<" ";
        }
        for(int col=1;col<=totalRow-row;col++){
            cout<<" ";
        }
        cout<<endl;
        //star//

    }
}