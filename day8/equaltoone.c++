#include<iostream>
using namespace std;
int main(){
    int arr[3]={0,4,-2};
    int n=3;
    int steps=0;
    int countNeg=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            while(arr[i]!=-1){
                arr[i]=arr[i]+1;
                steps++;
            }
          countNeg++;

        }
        if(arr[i]>0){
            while(arr[i]!=1){
                arr[i]=arr[i]-1;
                steps++;
            }
        }
        if(arr[i]==0 && countNeg%2==0){
            arr[i]=arr[i]+1;
            steps++;
            
        }
        if(arr[i]==0 && countNeg%2!=0){
            arr[i]=arr[i]-1;
            steps++;
        }
        
    }
    cout<<steps;
}