// You are given an integer array nums and a positive integer k.

// Return the number of subarrays where the maximum element of nums appears at least k times in that subarray.

// A subarray is a contiguous sequence of elements within an array.

 

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long countSubarrays(vector<int> &nums, int k)
    {
        int n = nums.size();
        int maxNum = INT_MIN;
        for (int x : nums) 
        {
            maxNum = max(maxNum, x);
        }
        int maxC = 0;
        long long res = 0;
        for (int l = 0, r = 0; r < n; r++)
        {
            if (nums[r] == maxNum)
                maxC++;
            while (maxC == k && l <= r)
            {
                res += n - r;
                if (nums[l] == maxNum)
                    maxC--;
                l++;
            }
        }
        return res;
    }
};