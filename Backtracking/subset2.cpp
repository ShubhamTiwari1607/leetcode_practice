#include<bits/stdc++.h>
using namespace std ;

class Solution {
    public:
    
        void helper(vector<int>&nums,int start,vector<vector<int>>&finalres,vector<int>&res){
            finalres.push_back(res);
            for(int i=start;i<nums.size();i++){
                if( i>start && nums[i]==nums[i-1]){
                    continue ;
                }
                res.push_back(nums[i]); 
                helper(nums,i+1,finalres,res);
                res.pop_back();
            }
        }
        vector<vector<int>> subsetsWithDup(vector<int>& nums) {
           sort(nums.begin(),nums.end());
           vector<int>res;
           vector<vector<int>>finalres ;
           helper(nums,0,finalres,res);
           return finalres ;
        }
};
//subset should not contain any duplicate 
//strategy 
// first sort the given array and then put condition  => i>start && nums[i]==nums[i-1]
