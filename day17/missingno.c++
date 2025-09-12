#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,3,4,5,6};
    int sum=0;
    int temp=0;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<=size+1;i++){
        sum=sum+i;
    }
    for(int i=0;i<size;i++){
        temp=temp+arr[i];
    }
    cout<<sum-temp;

}