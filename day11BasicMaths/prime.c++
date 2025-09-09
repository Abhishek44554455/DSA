#include<bits/stdc++.h>
using namespace std;
int main(){
        int n=15,count=0;
        if(n==1) cout<<"prime";
        else{
                for(int i=2;i<n;i++){
                        if(n%i==0){
                                count++;
                        }
                }
        }
        if(count==0){
                cout<<"prime";
        }
        else{
                cout<<"Not a prime Number";
        }
}