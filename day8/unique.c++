#include<iostream>
using namespace std;
int main(){
    int arr[7]={2,4,6,4,2,8,6};
    for(int i=0;i<7;i++){
        for(int j=6;j>i;j--){
            if(arr[i]==arr[j]){
                continue;
            }
            
        }
        cout<<arr[i];
    }
}