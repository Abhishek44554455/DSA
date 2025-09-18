#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> vec{4,1,2,3,7,1,2};
    int unique=0;
    for(auto x:vec){
        unique=unique^x;
    }
    cout<<unique;
}