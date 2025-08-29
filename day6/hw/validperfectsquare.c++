#include<iostream>
using namespace std;
int main(){
    int num=9;
    int res=1;
    while(res*res<=num){
            res++;
        }
        res=res-1;
        if(res*res==num){
            cout<<res;
        }
        else{
            cout<<"false";
        }
    
}