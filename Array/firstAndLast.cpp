#include<bits/stdc++.h>
using namespace std ;

class Solution {
    public:
        vector<int> searchRange(vector<int>& nums, int target) {
            int l=0,r=nums.size()-1;
            while(l<=r){
                if(nums[l]==target && nums[r]==target){
                    return {l,r};
                }
                if(nums[l]!=target){
                    l++;
                }
                if(nums[r]!=target){
                    r--;
                }
            }
            return {-1,-1};
        }
    };