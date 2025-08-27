#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter A Number: ";
    cin>>num;
    if(num==1){
        cout<<"prime number";
        
    }
    else{
        for(int i=2;i<num;i++){
            if(num%i==0){
                cout<<"Not a Prime Number";
                break;
            }
            else{
                cout<<"Prime Number";
                break;
            }
        }
    }
}