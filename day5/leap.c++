#include<iostream>
using namespace std;

int main(){
    int n=2020;
    ((n % 4==0)&&(n%100!=0 || n%400==0))?cout<<"true":cout<<"false";

    }
