#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={2,7,11,15};
    int target=9;
    int targetSum=0;
    int n=vec.size();
    // cout<<n;
    int i=0,j=n-1;
  while(i<j){
    targetSum=vec[i]+vec[j];
    // cout<<targetSum;
    
    if(targetSum>target){
        j--;
    }
    else if(targetSum==target){
        cout<<i<<j;
        // break;
    }
    else{
        i++;
    }
  }
}