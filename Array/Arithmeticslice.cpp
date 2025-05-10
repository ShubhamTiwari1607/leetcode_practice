// An integer array is called arithmetic if it consists of at least three elements and if the 
// difference between any two consecutive elements is the same.

// For example, [1,3,5,7,9], [7,7,7,7], and [3,-1,-5,-9] are arithmetic sequences.
// Given an integer array nums, return the number of arithmetic subarrays of nums.

#include<bits/stdc++.h>
using namespace std ;

class Solution {
    public:
        int numberOfArithmeticSlices(vector<int>& nums) {
            if(nums.size()<3)return 0;
            int total=0,count=0;
            int i=2;
            while(i<nums.size()){
                if(nums[i]-nums[i-1]==nums[i-1]-nums[i-2]){
                    count++;
                    total+=count;
                }else{
                    count=0;
                }
                i++;
            }
            return total ;
        }
    };