#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={2,7,4,11,5,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    int n=size-1;
    int temp=arr[n];
    while(n>=1){
        arr[n]=arr[n-1];
        n--;

    }
    arr[0]=temp;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}