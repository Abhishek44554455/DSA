#include<iostream>
using namespace std;
void prime(int num){
    if(num==1) {
        cout<<num <<"prime"<<endl;
    }
    else{
    int count=0;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            count++;
        }
    }
    if(count==2){
        cout<<num<<"is prime"<<endl;
    }
}
    
}
int main(){
    int arr[5]={2,1,7,11,13};
    for(int i=0;i<5;i++){
        prime(arr[i]);
    }
}