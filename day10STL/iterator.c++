#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
        vector<int> v={10,20,30,40,50};
        vector<int>::iterator i=v.begin();
        while(i!=v.end()){
                cout<<*i<<" ";
        i++;
        }
}