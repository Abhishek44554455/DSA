#include<iostream>
using namespace std;
int main(){
    int arr[5]={6,5,3,2,7};
    int arr2[5];
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=4;i>=0;i-- ){
         arr2[n-i-1]=arr[i];
         
    }
    for(int i=0;i<5;i++){
        cout<<arr2[i];
    }
}