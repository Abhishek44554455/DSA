#include<iostream>
using namespace std;
int main(){
    int arr[5];
    printf("Enter Array: ");
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<arr[j]<<" ";
        }
        cout<<"\n";
    }

}