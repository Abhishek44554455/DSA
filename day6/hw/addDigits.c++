#include <iostream>
using namespace std;
int main()
{
    int num = 38;
    int sum;
while(num>9){
     sum = 0;
     while (num != 0)
    {
        int rem = num % 10;
        //cout<<"rem: "<<rem;
        sum = sum + rem;
        //cout<<"sum: "<<sum;
        num = num / 10;
        //cout<<"num: "<<num;
    }
    //cout<<sum;
    num=sum;
    //num=sum;
    //cout<<sum;
    //cout<<sum;
    
}
//num=sum;
cout<<num;
   
}