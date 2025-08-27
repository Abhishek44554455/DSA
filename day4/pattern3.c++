//1234
//5678
//9101112
//13141516

// #include<iostream>
// using namespace std;

// int main(){
// for(int i=0;i<4;i++){   //here i indicates the row no. while j indicates as column
//     for(int j=1;j<=4;j++){
//         cout<<i*4+j<<" ";
//     }
//     cout<<endl;
// }
// return 0;
// }
  

//Easier Approach

#include<iostream>
using namespace std;

int main(){
    int count=1;
for(int i=0;i<=4;i++){   //here i indicates the row no. while j indicates as column
    for(int j=0;j<=4;j++){
        cout<<count<<" ";
        count++;
    }
    cout<<endl;
}
return 0;
}
