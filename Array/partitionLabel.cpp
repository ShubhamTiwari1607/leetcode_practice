// You are given a string s. We want to partition the string into as many parts as possible so that each letter appears in at most one part. For example, the string "ababcc" can be partitioned into ["abab", "cc"], but partitions such as ["aba", "bcc"] or ["ab", "ab", "cc"] are invalid.

// Note that the partition is done so that after concatenating all the parts in order, the resultant string should be s.
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> partitionLabels(string s)
    {
        vector<int> res;
        unordered_map<char, int> last;

        for (int i = 0; i < s.size(); i++)
        {
            last[s[i]] = i;
        }
        int i = 0;
        while (i < s.size())
        {
            int end = last[s[i]];
            int j = 0;
            while (j < end)
            {
                end = max(end, last[s[j]]);
                j++;
            }
            res.push_back(j - i + 1);
            i = j + 1;
        }
        return res;
    }
};