#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    TreeNode *sortedArrayToBST(vector<int> &nums)
    {
        return make(nums, 0, nums.size() - 1);  // Pass inclusive end
    }

    TreeNode *make(vector<int> &nums, int start, int end)
    {
        if (start > end) return nullptr;       // Base case for inclusive bounds
        int mid = (start + end) / 2;
        TreeNode *root = new TreeNode(nums[mid]);
        root->left = make(nums, start, mid - 1);  // left half
        root->right = make(nums, mid + 1, end);   // right half
        return root;
    }
};