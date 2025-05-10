#include<bits/stdc++.h>
using namespace std ;

class Solution
{
public:
    vector<vector<int>> mergeArrays(vector<vector<int>> &nums1, vector<vector<int>> &nums2)
    {
        int m = nums1.size();
        int n = nums2.size();
        vector<vector<int>> res;
        int i = 0, j = 0;

        while (i < m && j < n)
        {
            if (nums1[i][0] == nums2[j][0])
            {
                res.push_back({nums2[i][0], nums1[i][0] + nums2[j][0]});
                i++, j++;
            }
            else if (nums1[i][0] > nums2[j][0])
            {
                res.push_back({nums2[j][0], nums2[j][1]});
                j++;
            }
            else
            {
                res.push_back({nums1[i][0], nums1[i][1]});
                i++;
            }
        }
        while (i < m)
        {
            res.push_back(nums1[i]);
            i++;
        }
        while (j < n)
        {
            res.push_back(nums2[j]);
            j++;
        }

        return res;
    }
};