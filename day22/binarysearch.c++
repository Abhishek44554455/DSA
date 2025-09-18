#include<iostream>
using namespace std;
int main(){
    int arr[11]={2,4,5,7,11,17,18,19,23,27,30};
    
    int beg=0;
    int end=10;
    int target=11;
    while(beg<=end){
        int mid=(beg+end)/2;
    if(target==arr[mid]){
        cout<<mid;
        break;
        
    }
    else if(arr[mid]<target){
        beg=mid+1;
       
    }
    else{
        end=mid-1;
    }
    }

}