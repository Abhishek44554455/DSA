#include<iostream>
using namespace std;
int main(){
    int arr[6]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    int loc=2;
    int item=80;
    for(int i=n-1;i>=3;i--){
        arr[i]=arr[i-1];
    }
    arr[loc]=item;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}