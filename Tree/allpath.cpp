// Given the root of a binary tree, return all root-to-leaf paths in any order.

// A leaf is a node with no children.

#include<bits/stdc++.h>
using namespace std ;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
    public:
        void backtrack(vector<string>&res,TreeNode*&root,string temp){
            if(root == NULL) return ;
            temp+=to_string(root->val);
            if( root->left == NULL && root->right==NULL){
                res.push_back(temp);
            }
            temp+="->";
            
            backtrack(res,root->left,temp);
            backtrack(res,root->right,temp);
        }
        vector<string> binaryTreePaths(TreeNode* root) {
            vector<string> res ;
            backtrack(res,root,"") ;
            return res;
        }
};