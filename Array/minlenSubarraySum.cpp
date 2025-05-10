// Given an array of positive integers nums and a positive integer target, 
// return the minimal length of a subarray whose sum is greater than or equal
//  to target. If there is no such subarray, return 0 instead.

// Example 1:

// Input: target = 7, nums = [2,3,1,2,4,3]
// Output: 2

#include<bits/stdc++.h>
using namespace std ;

class Solution {
    public:
        int minSubArrayLen(int target, vector<int>& nums) {
            int r = 0, l = 0, sum = 0, minLength = INT_MAX;
            while (r < nums.size()) {
                sum += nums[r];
                while (sum >= target) {
                    minLength = std::min(minLength, r - l + 1);
                    sum -= nums[l];
                    l++;
                }
                r++;
            }
            return (minLength == INT_MAX) ? 0 : minLength;
        }
    };
    
        
    