#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter a Num: ";
    cin>>num;
    int a=0,b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=2;i<num;i++){
        int c=a+b;
        cout<<" "<<c;
        a=b;
        b=c;
    }
    return 0;
}