#include<iostream>
using namespace std;

int main(){
    int n=2368;
    int count=0;
    for(int i=0;n>0;i++){
        int rem=n%10;
        n=n/10;
        
        cout<<rem;
        count++;
    }
   

}
    