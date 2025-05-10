#include<bits/stdc++.h>
using namespace std ;


class node{
public:
  int val;
  node* left ,*right ;
};
class Solution{

    public:
    vector<vector<int>> levelorder(node* root){
        vector<vector<int>> res;
        queue<node*>que ;

        que.push(root);
        while(!que.empty()){
            int levelsize = que.size() ;
            vector<int> temp ;

            for(int i=0;i<levelsize;i++){
                node* t = que.front();
                que.pop() ;
                temp.push_back(t->val);
                if(t->left)que.push(t->left);
                if(t->right)que.push(t->right);
            }
            res.push_back(temp);
        }
        
    }
};