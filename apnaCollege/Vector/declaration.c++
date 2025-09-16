#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec;
    vec={12,14};
    for(auto val:vec){
        cout<<val<<" ";
    }
}