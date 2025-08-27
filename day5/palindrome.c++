#include<iostream>
using namespace std;
int main(){
    int num,rev=0,rem;
    cout<<"enter a Number: ";
    cin>>num;
    int originalNum=num;
    while(num!=0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;

        

    }
    if(originalNum==rev){
        cout<<originalNum<<"is Palindrome";
    }
    else{
        cout<<originalNum<<"is Not palindrome";
    }
}