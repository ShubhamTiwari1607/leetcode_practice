#include<iostream>
#include <vector>
using namespace std ;

void reverse(vector<int>&nums ,int l ,int r){
    while(l<=r){
        int temp = nums[l];
        nums[l] = nums[r] ;
        nums[r] = temp ;
        l++;
        r--;
    }
}


void rotate(vector<int>&nums,int k){
  k=k%nums.size();
  reverse(nums,0,nums.size()-1);
  reverse(nums,0,k-1);
  reverse(nums,k,nums.size()-1);
}

int main(){
    vector<int>nums = {1,2,3,4,5,6,7} ;
    rotate(nums,8);
    for(int i = 0 ; i < 7;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}