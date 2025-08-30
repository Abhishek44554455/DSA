#include<iostream>
using namespace std;
int main(){
    int arr[5]={6,4,2,0,-5};
    int n=5;
    int steps=0;
    int countzero=0;
    int mul=1;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            while(arr[i]!=-1){
                arr[i]=arr[i]+1;
                steps++;
            }
            mul=arr[i]*mul;
          

        }
        else if(arr[i]>0){
            while(arr[i]!=1){
                arr[i]=arr[i]-1;
                steps++;
            }
            mul=arr[i]*mul;
        }

        else if(arr[i]==0){
            arr[i]=arr[i]+1;
            steps++;
            mul=arr[i]*mul;
        }
        countzero++;
        
       
        
    }
    if(countzero%2!=0){
        mul=mul*-1;
    }
    cout<<steps;
    cout<<mul;
}