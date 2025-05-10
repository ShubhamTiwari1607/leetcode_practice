#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
        vector<vector<int>> answer;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            int j = i + 1;
            while (j < nums.size())
            {
                int l = j + 1, r = nums.size() - 1;
                while (l < r)
                {
                    long long sum = (long long)nums[i] + (long long)nums[j] + (long long)nums[l] + (long long)nums[r];
                    if (sum == target)
                    {
                        answer.push_back({nums[i], nums[j], nums[l], nums[r]});
                        l++, r--;
                        while (l < r && nums[l] == nums[l - 1])
                            l++;
                    }
                    else if (sum < target)
                    {
                        l++;
                    }
                    else
                    {
                        r--;
                    }
                }
                j++;
                while (j < nums.size() && nums[j] == nums[j - 1])
                    j++;
            }
        }
        return answer;
    }
};