#include<iostream>
using namespace std;
int main(){
    int arr[7]={2,4,6,4,2,8,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
        cout<<ans;
    }
    cout<<ans;
}



// #include<iostream>
// using namespace std;
// void unique(int num){
//     if(num^num){
//         cout<<"not unique";
//     }
// }

// int main(){
//     int arr[7]={2,4,6,4,2,8,6};
//     for(int i=1;i<7;i++){
//         unique(arr[i]);
//     }
// }