// Given an unsorted array of integers nums,
// return the length of the longest consecutive elements sequence.
// You must write an algorithm that runs in O(n) time.
// Example 1:

// Input: nums = [100,4,200,1,3,2]
// Output: 4

#include<bits/stdc++.h>
using namespace std ;
class Solution {
    public:
        int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0; 
    
        unordered_set<int> st(nums.begin(), nums.end()); 
        int longest = 0;
    
        for (int num : st) { 
            if (!st.count(num - 1)) { 
                int count = 1;
                int curr = num;
                
                while (st.count(curr + 1)) { 
                    count++;
                    curr++;
                }
    
                longest = max(longest, count);
            }
        }
    
        return longest;
    }
    
};