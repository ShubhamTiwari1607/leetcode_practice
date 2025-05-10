// Given an unsorted integer array nums. Return the smallest positive integer that is not present in nums.

// You must implement an algorithm that runs in O(n) time and uses O(1) auxiliary space.

#include<bits/stdc++.h>
using namespace std ;

class Solution {
    public:
        int firstMissingPositive(vector<int>& nums) {
            int n =nums.size() ;
            int res = 0 ;
            for(int i=0;i<n;i++){
                long element = nums[i] ;
                long  corrIndx = element-1 ;
                if(nums[i]>=1 && nums[i]<=n){
                    if(element!=nums[corrIndx]){
                        swap(nums[i],nums[corrIndx]);
                        i--;
                    }
                }
            }
            for(int i=0;i<n;i++){
              if (i+1!=nums[i]) return i+1 ;
            }
            return n+1;
           
        }
    };