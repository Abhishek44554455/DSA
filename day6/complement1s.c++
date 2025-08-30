#include<iostream>
using namespace std;
int main(){
    int num=101;
    int rem;
    int sum=0;
    int mul=1;
    while(num!=0){
        rem=num%10;
        if(rem ^ 1==1){

            sum=sum*10+(0);
        }else{
            sum=sum*10+(1);
        }
        num=num/10;
        mul=mul*10;
    }
    cout<<sum;
}