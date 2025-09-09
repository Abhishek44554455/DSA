#include<bits/stdc++.h>
using namespace std;
int main(){
        vector<int>v1,v2;
        int n1=9;
        int n2=12;
        for(int i=1;i<=n1;i++){
                if(n1%i==0){
                        v1.push_back(i);
                }
                if(n2%i==0){
                        v2.push_back(i);
                }

        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        for(auto x:v2){
                cout<<x<<" ";
        }
}