#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void backtrack(vector<int> &nums, int &target, int &count, int index)
    {
        if (index == nums.size())
        {
            if (target == 0)
            {
                count++;
            }
            return;
        }
        target -= nums[index];
        backtrack(nums, target, count, index + 1);
        target += nums[index];

        target += nums[index];
        backtrack(nums, target, count, index + 1);
        target -= nums[index];
    }

    int findTargetSumWays(vector<int> &nums, int target)
    {
        int count = 0;
        backtrack(nums, target, count, 0);
        return count;
    }
};