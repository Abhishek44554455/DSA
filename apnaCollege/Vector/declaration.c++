#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec;
    vec={12,14};
    vec.push_back(15);
    vec.push_back(118);
    vec.pop_back();
    for(auto val:vec){
        cout<<val<<" ";
    }

    //functions size push_back pop;
}