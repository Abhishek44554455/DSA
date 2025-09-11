#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={10,20,7,11,8,4};
    int search=11;
    int flag=0;
    for(int i=0;i<6;i++){
        if(arr[i]==search){
            flag++;
            cout<<arr[i]<<" is found at "<<i+1;
        }

    }
    if(flag==0){
        cout<<"Search Result is not found";
    }
}