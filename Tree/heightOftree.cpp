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
int height(node* &hea){ 
    if(hea == nullptr) return 0;
    int lh = height(hea->left);
    int rh = height(hea->right);
    return max(lh,rh)+1 ;
}
 int countNodes(node* hea) {
        if(hea == nullptr) return 0;
        int lc = countNodes(hea->left);
        int rc = countNodes(hea->right);
        return lc+rc+1;
    }

int main(){
    node *hea = nullptr ;
    createTree(hea,3);
    createTree(hea,9);
    createTree(hea,20);
    createTree(hea,15);
    createTree(hea,7);
    int h = height(hea);
    cout<<"the heigth of the binary tree is : "<<h <<endl;
    cout<<"total nodes in the tree is : "<<countNodes(hea);
    return 0;
}