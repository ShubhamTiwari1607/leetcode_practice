#include<bits/stdc++.h>
using namespace std ;

class Solution {
    public:
        vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
            set<int> hashset(nums1.begin(), nums1.end());
            set<int> resultSet;
            for (int num : nums2) {
                if (hashset.find(num) != hashset.end()) {
                    resultSet.insert(num);
                }
            }
            return vector<int>(resultSet.begin(), resultSet.end());
        }
    };