#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={15,12,-15,24,72};
    
    int temp=0;
    int size=5;
    int smallest=INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
            temp=i;
        }
    }
    cout<<"Smallest Number: "<<temp;
}