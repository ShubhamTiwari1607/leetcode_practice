// Given two integers n and k, return all possible combinations of k numbers chosen from the range [1, n].

// You may return the answer in any order.

// Example 1:

// Input: n = 4, k = 2
// Output: [[1,2],[1,3],[1,4],[2,3],[2,4],[3,4]]
#include<bits/stdc++.h>
using namespace std ;

class Solution {
   
    public:
        
        void helper(vector<int>&nums,int start,vector<vector<int>>&finalres,vector<int>& res,int k){
            if(res.size()==k){
                finalres.push_back(res);
                return ;
            }
            for(int i=start;i<nums.size();i++){
                res.push_back(nums[i]);
                helper(nums,i+1,finalres,res,k);
                res.pop_back();  
            }
        }
    
        vector<vector<int>> combine(int n, int k) {
           vector<int> nums;
           for(int i=1;i<=n;i++){
            nums.push_back(i);
           }
           vector<vector<int>> finalres;
           vector<int> res ;
           int start = 0 ;
           helper(nums,0,finalres,res,k);
           return finalres ;
        }
    };