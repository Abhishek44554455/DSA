#include<iostream>
using namespace std;
int main(){
    int num=0;
    int org=num;
    if(num>=0){
    int rev=0;
    while(num!=0){
    int rem=num%10;
    
    rev=rev*10+rem;
    num=num/10;
    }
    cout<<rev;
    
    if(rev==org){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}
else{
    cout<<"false";
}
}