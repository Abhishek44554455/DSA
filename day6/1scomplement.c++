#include<iostream>
using namespace std;
int main(){
     int num,digit,sum=0;
     cout<<"Enter a Number: ";
     cin>>num;
     while(num!=0){
        digit=num%10;
        num=num/10;
        if(digit==1){
            digit=0;
        }else{
            digit=1;
        }
        
        sum=sum*10+digit;
        
        cout<<sum;

     }
}