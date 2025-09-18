#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,1,2,2,1};
    int n=5;
    int mj=2;
    int count=1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        // cout<<count;
        if(count>mj){
            cout<<arr[i];
            break;
        }
        count=1;
        
    }
}