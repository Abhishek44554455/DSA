#include<iostream>
using namespace std;
int main(){
    int arr[3]={-2,4,0};
    int step=0;
    int countzero=0;
    int mul=1;
    for(int i=0;i<3;i++){
        if(arr[i]>0){
            step=step+arr[i]-1;
            mul=mul*1;
        }
        else if(arr[i]<0){
            step=step+(-1-arr[i]);
            mul=mul*-1;
        }
        else{
            step++;
            countzero++;
        }
        if(mul==1 || countzero>0){
            mul=mul*1;
        }
        else{
            mul=mul*-1;
        }

    }
    cout<<step<<" "<<mul;
}