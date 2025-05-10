#include<bits/stdc++.h>
using namespace std ;

class Solution {
    public:
        vector<int> res; // Declare globally for memoization
    
        int solve(vector<int>& nums, int ind, int n) {
            if (ind >= n) return 0; // Base case
    
            if (res[ind] != -1) return res[ind]; // DP check
    
            int steal = nums[ind] + solve(nums, ind + 2, n);
            int skip = solve(nums, ind + 1, n);
    
            return res[ind] = max(steal, skip);
        }
    
        int rob(vector<int>& nums) {
            int n = nums.size();
            res.assign(n, -1); // Initialize DP table
            return solve(nums, 0, n);
        }
    };
    