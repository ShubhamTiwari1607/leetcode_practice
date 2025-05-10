#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void helper(vector<int> &nums, vector<int> &temp, vector<vector<int>> &res, vector<bool> &used)
    {
        if (temp.size() == nums.size() && find(res.begin(), res.end(), temp) == res.end())
        {
            res.push_back(temp);
            return;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (used[i])
                continue;
            used[i] = true;
            temp.push_back(nums[i]);
            helper(nums, temp, res, used);
            temp.pop_back();
            used[i] = false;
        }
    }

    vector<vector<int>> permuteUnique(vector<int> &nums)
    {
        int n = nums.size();
        vector<vector<int>> res;
        vector<int> temp;
        vector<bool> used(n, false);
        helper(nums, temp, res, used);

        return res;
    }
};