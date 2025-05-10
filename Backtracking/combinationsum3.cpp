// Find all valid combinations of k numbers that sum up to n such that the following conditions are true:
// Only numbers 1 through 9 are used.
// Each number is used at most once.
// Return a list of all possible valid combinations. The list must not contain the same combination twice, and the combinations may be returned in any order.
// Example 1:
// Input: k = 3, n = 7
// Output: [[1,2,4]]
// Explanation:
// 1 + 2 + 4 = 7
// There are no other valid combinations.

#include<bits/stdc++.h>
using namespace std ;

class Solution {
    public:
        void helper(int start,int k, int target,vector<int>&res,vector<vector<int>>&finalres){
            if(target == 0 && res.size()==k){
                finalres.push_back(res);
                return ;
            }
            if(res.size()>k){
                return ;
            }
            for(int i=start;i<10;i++){
                res.push_back(i);
                helper(i+1,k,target-i,res,finalres);
                res.pop_back();
            }
        }
    
        vector<vector<int>> combinationSum3(int k, int n) {
            vector<int>res;
            vector<vector<int>>finalres ;
    
            helper(1,k,n,res,finalres);
            return finalres ;
        }
    };