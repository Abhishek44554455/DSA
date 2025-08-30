#include<iostream>
using namespace std;
int main(){
    int num=1010;
    int sum=0;
    int rem;
    int mul=1;
    while(num!=0){
        rem=num%10; 
        sum=sum+(rem*mul);
        num=num/10;
        mul=mul*2;
    }
    cout<<sum;
}