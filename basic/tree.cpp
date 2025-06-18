#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int val;
    node *left, *right;

    node(int val)
    {
        this->val = val;
        this->left = nullptr;
        this->right = nullptr;
    }
};

class tree
{

public:
    node *insert(node *root, int val)
    {
        if (root == nullptr)
        {
            return new node(val);
        }
        if (root->val < val)
        {
            root->right = insert(root->right, val);
        }
        if (root->val > val)
        {
            root->left = insert(root->left, val);
        }
        return root;
    }

    void preorderTraversal(node *root)
    {
        if (root != nullptr)
        {
            cout << root->val << " ";
            preorderTraversal(root->left);
            preorderTraversal(root->right);
        }
    }

    void inorderTraversal(node *root)
    {
        if (root != nullptr)
        {
            inorderTraversal(root->left);
            cout << root->val << " ";
            inorderTraversal(root->right);
        }
    }
    void postorderTraversal(node *root)
    {
        if (root != nullptr)
        {
            postorderTraversal(root->left);
            postorderTraversal(root->right);
            cout << root->val;
        }
    }
    vector<vector<int>> levelTraversal(node *root)
    {
        queue<node *> q;
        q.push(root);
        vector<vector<int>> res;
        while (!q.empty())
        {
            int n = q.size();
            vector<int> temp;
            for (int i = 0; i < n; i++)
            {
                node* x = q.front();
                q.pop();
                temp.push_back(x->val);
                if(x->left)q.push(x->left);
                if(x->right)q.push(x->right);
            }
            res.push_back(temp);
        }
        return res;
    }

    int nodeCount(node* root){
        if(root ==nullptr)return 0;
        int lc = nodeCount(root->left);
        int rc = nodeCount(root->right);
        return lc+rc+1;
    }
    //search in a binary search tree is a O(log(n)) operation
    node* recusrsiveSearch(node* root,int key){
        if(root == nullptr){
            return NULL;
        }
        if(root->val == key){
            return root;
        }else if(root->val < key){
            return recusrsiveSearch(root->right,key);
        }else{
            return recusrsiveSearch(root->left,key);
        }
    }
    
};

int main()
{
    tree t1;
    node *root = nullptr;
    root = t1.insert(root, 3);
    root = t1.insert(root, 2);
    root = t1.insert(root, 1);
    root = t1.insert(root, 6);
    root = t1.insert(root, 5);
    root = t1.insert(root, 4);
    root = t1.insert(root, 7);
    root = t1.insert(root, 72);
    // vector<vector<int>> res = t1.levelTraversal(root);
    // for(auto x: res){
    //     for(int i = 0;i < x.size();i++){
    //         cout << x[i] << " ";
    //     }
    //     cout<<endl;
    // }
    // t1.inorderTraversal(root);
    int nodecount =  t1.nodeCount(root);
    cout << nodecount ;
    node* res = t1.recusrsiveSearch(root,89);
    cout <<"\n"<< res->val;

    return 0;
}