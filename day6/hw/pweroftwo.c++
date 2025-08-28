#include<iostream>
#include<math.h>
using namespace std;
int main(){


float binary_log = log2(0); // Calculates log_2(8.0)
//cout<<binary_log;
if(binary_log==floor(binary_log)){
    cout<<true;
}else{
    cout<<false;
}
}