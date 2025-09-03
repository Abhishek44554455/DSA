#include<iostream>
#include<algorithm>
using namespace std;
int main(){
        int arr[]={8,20,13,17};
        sort(arr,arr+4);
        for(int i=0;i<4;i++){
                cout<<arr[i]<<" ";
        }
}