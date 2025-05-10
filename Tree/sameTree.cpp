/*Given the roots of two binary trees p and q, write a function to check if they are the same or not.

Two binary trees are considered the same if they are structurally identical, and the nodes have the same value.*/
#include<bits/stdc++.h>
using namespace std ;
class node{
    public:
    int data;
    node* left;
    node* right;
};

void createTree(node* &root, int val){
    if(root == nullptr){
        node* newNode = new node ;
        newNode->data = val; 
        newNode->left = newNode->right =nullptr ;
        root = newNode ;
        return  ;
    }
    if(root->data < val){
        createTree(root->right,val);
    }
    if(root->data > val){
       createTree(root->left,val) ;
    }
}

class Solution{
    public:
    bool sameTree(node* p, node* q){
        if(p==nullptr && q== nullptr) return true;
        if(q==nullptr|| q==nullptr) return true ;
        if(p->data!=q->data)return false ;
        bool l = sameTree(p->left,q->left);
        bool r = sameTree(p->right,q->right);
        return l&&r ;
    }  
};

 int main(){
    node *root = nullptr ;
    createTree(root,3);
    createTree(root,9);
    createTree(root,20);
    createTree(root,15);
    createTree(root,7);
    Solution s;
    bool ans =  s.sameTree(root,root);
    cout<<"the enterd tree are same ? "<<ans ;
    return 0;
}
