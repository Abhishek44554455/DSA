#include<iostream>
using namespace std;
int main(){
    int num,digit,sum=0;
    cout<<"Enter a Number: ";
    cin>>num;
    int mul=1;
    while(num!=0){
        digit=num%2;
        sum=sum+digit*mul;
        num=num/2;
        mul=mul*10;
    }
    cout<<sum;
}