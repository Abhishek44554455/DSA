#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[6]={6,5,4,3,2,1};
    //int temp[6];
    int i=0,j=5;
    // while(j>=0){
    //     temp[j]=arr[i];
    //     i++;
    //     j--;
    // }
    // for(int i=0;i<6;i++){
    //     cout<<temp[i]<<" ";
    // }
     while(i<j){
    swap(arr[j],arr[i]);
        
        j++;
        i--;
    }
    for(int i=0;i<6;i++){
         cout<<arr[i]<<" ";
     }
}