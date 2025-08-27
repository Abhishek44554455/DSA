#include<iostream>
using namespace std;
int main(){
    int num,dig,sum=0,mul=1;
    cout<<"Enter a Number: ";
    cin>>num;
    while(num!=0){
        dig=num%10;
        sum=sum+dig*mul;
        num=num/10;
        mul=mul*2;


    }
    cout<<sum;
}