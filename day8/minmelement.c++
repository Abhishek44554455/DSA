#include<iostream>
using namespace std;
int main(){
    int arr[6]={3,2,6,11,-8,-2};
    int min=arr[0];
    for(int i=1;i<6;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<min;
}