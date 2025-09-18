#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={5,4,-1,7,8};
    // int sum=0;
    for(int i=0;i<5;i++){
        for(int j=i;j<5;j++){
            for(int k=i;k<=j;k++){
                cout<<v.at(k);
            }
            cout<<" ";
        }
        cout<<endl;
        
        
    }
}