#include <bits/stdc++.h>
using namespace std;

class node {
public:
    int val;
    node* left;
    node* right;
    node(int value) {
        val = value;
        left = NULL;
        right = NULL;
    }
};

class BinaryTree {
public:
    BinaryTree(node*& hea, int val) {
        hea = new node(val);
    }

    void insert(node*& hea, int val) {
        if (hea == NULL) {
            hea = new node(val);
            return;
        }

        queue<node*> q;
        q.push(hea);

        while (!q.empty()) {
            node* temp = q.front();
            q.pop();

            if (temp->left == NULL) {
                temp->left = new node(val);
                return;
            } else {
                q.push(temp->left);
            }

            if (temp->right == NULL) {
                temp->right = new node(val);
                return;
            } else {
                q.push(temp->right);
            }
        }
    }

    void traversal(node* hea) {
        if (hea == NULL) return;

        traversal(hea->left);
        cout << hea->val << " ";
        traversal(hea->right);
    }

    bool isSame(node* p,node* q){
        if(p==NULL && q==NULL)return true;
        if(p==NULL || q==NULL)return false ;
        if(p->val!=q->val)return false ;
        bool l= isSame(p->left,q->left);
        bool r= isSame(p->right,q->right);
        return l&&r;
    }
    int sumofNode(node* hea){
         if(hea->left ==NULL && hea->right==NULL){
            return hea->val;
        }
        return hea->val+ sumofNode(hea->left) + sumofNode(hea->right);
    }
};

int main() {
    node* hea1 = NULL; 
    node* hea2 = NULL;
    BinaryTree tr1(hea1, 1); 
    tr1.insert(hea1, 2);     
    tr1.insert(hea1, 3); 
    BinaryTree tr2(hea2, 1); 
    tr2.insert(hea2, 2);     
    tr2.insert(hea2, 3);     
    tr2.insert(hea2, 4);     
    // if(tr2.isSame(hea1,hea2)){
    //     cout<<"trees are same";
    // }else{
    //     cout<<"not same";
    // }
    int sum = tr1.sumofNode(hea1);
    cout<<sum;
    return 0;
}
