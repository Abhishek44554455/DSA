#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={3,-4,5,4,-1,7,-8};
     int sum=0;
     int max=0;
     int n=v.size();
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                // cout<<v.at(k);
                sum=sum+v.at(k);
            }
             if(max<sum){
                max=sum;
             }
             sum=0;    
        }   
    }
        cout<<max;

}