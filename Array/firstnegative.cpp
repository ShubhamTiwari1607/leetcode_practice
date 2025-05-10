#include<bits/stdc++.h>
using namespace std ;


int binarySearch(vector<int> nums){
    int l=0,r=nums.size()-1;
    int res = -1 ;
    while(l<=r){
        int mid = l+(r-l)/2;
        if(nums[mid]<0){
          res = mid;
          r = mid-1;
        }else{
            l=mid+1;
        }
    }
    return nums[res];
}

int main(){
    vector<int>nums = {4,3,2,1,0,-2,-3};
    int res = binarySearch(nums);
    cout<<res;
    return res ;
}