// Given an integer array nums of unique elements, return all possible 
// subsets
//  (the power set).

// The solution set must not contain duplicate subsets. Return the solution in any order.

// Example 1:
// Input: nums = [1,2,3]
// Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]

#include<bits/stdc++.h>
using namespace std ;

class Solution {
    public:
       void helper(vector<int>&nums,int start,vector<vector<int>>&finalres,vector<int>&res){
          finalres.push_back(res);
          for(int i=start;i<nums.size();i++){
            res.push_back(nums[i]);
            helper(nums,i+1,finalres,res);
            res.pop_back();
          }
       }
        vector<vector<int>> subsets(vector<int>& nums) {
            vector<vector<int>> finalres ;
            vector<int>res;
    
            helper(nums,0,finalres,res);
    
            return finalres ;
        }
    };