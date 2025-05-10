#include<iostream>
using namespace std ;

class node{
 public:
 int val ;
 node* left;
 node* right;
};

node* create(node* head,int val){
    if(head == nullptr){
        node* newNode  = new node ;
        newNode->val = val;
        newNode->right = newNode->left = NULL ;
        return newNode ;
    }
    node* temp = head ;
    while(temp->right!=NULL){
        temp = temp->right ;
    }
    node* newNode = new node ;
    newNode->val = val ;
    newNode->right = NULL ;
    newNode->left = temp ;
    temp->right =newNode ;
    return head;
}
void traversal(node* head){  //traversal 
    node* temp= head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->right ;
    }
}

int main(){
    node *head = NULL ;
    head = create( head,0);
    for(int i=1 ;i<=9;i++){
        create(head,i);
    }
    traversal(head);
    return 0;
}