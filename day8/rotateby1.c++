#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,3,7,11,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int num=arr[n-1];
    for( int i=n;i>1;i--){
        arr[i-1]=arr[i-2];
        //cout<<arr[n-1];
    }
    
    arr[0]=num;
    // cout<<arr[0];
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}