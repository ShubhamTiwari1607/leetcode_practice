/*Given the hea of a binary tree and an integer targetSum, return true if the tree has a hea-to-leaf path
 such that adding up all the values along the path equals targetSum.
A leaf is a node with no children.*/
#include<bits/stdc++.h>
using namespace std ;

class node{
    public:
    int data;
    node* left;
    node* right;
};

void createTree(node* &hea, int val){
    if(hea == nullptr){
        node* newNode = new node ;
        newNode->data = val; 
        newNode->left = newNode->right =nullptr ;
        hea = newNode ;
        return  ;
    }
    if(hea->data < val){
        createTree(hea->right,val);
    }
    if(hea->data > val){
       createTree(hea->left,val) ;
    }
}
//Solution 
class Solution{
 public:
 bool hasPathSum(node* hea,int target){
   if(hea == NULL) return false ;
   if(hea->left == nullptr && hea->right == nullptr && hea->data == target )
   return true ;
   bool left = hasPathSum(hea->left, target - hea->data);
   bool right = hasPathSum(hea->right, target - hea->data);
   return left||right ;
 }

};
int main(){
    node *hea = nullptr ;
    createTree(hea,3);
    createTree(hea,9);
    createTree(hea,20);
    createTree(hea,15);
    createTree(hea,7);
    Solution s;
    bool ans = s.hasPathSum(hea,50);
    cout<<"the tree has path sum 50 :"<<ans ;
    return 0;

}
