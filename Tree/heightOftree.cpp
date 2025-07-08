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
int height(node* &root){ 
    if(root == nullptr) return 0;
    int lh = height(root->left);
    int rh = height(root->right);
    return max(lh,rh)+1 ;
}
 int countNodes(node* root) {
        if(root == nullptr) return 0;
        int lc = countNodes(root->left);
        int rc = countNodes(root->right);
        return lc+rc+1;
    }

int main(){
    node *root = nullptr ;
    createTree(root,3);
    createTree(root,9);
    createTree(root,20);
    createTree(root,15);
    createTree(root,7);
    int h = height(root);
    cout<<"the heigth of the binary tree is : "<<h <<endl;
    cout<<"total nodes in the tree is : "<<countNodes(root);
    return 0;
}