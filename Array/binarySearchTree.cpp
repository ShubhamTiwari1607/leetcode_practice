#include <iostream>
using namespace std ;

class node{
    public :
    int data ;
    node *left ,*right ;

};

class binaryTree{
   public :
   node* insert(node *head, int data){
     if(head == NULL){
        head = new node ;
        head->left =NULL ;
        head->data = data ;
        head->right = NULL ;
     }else{
        node* newNode = new node ;
        newNode->data = data ;
        newNode->left =NULL ;
        newNode->right = NULL ;
        node* temp = head ;
        while(1){
            if(temp->data < newNode->data){
              if(temp->right == NULL){
                temp->right = newNode ;
                break ;
              }else{
                temp = temp->right ;
              }
            }else{
                if(temp->left == NULL){
                   temp->left = newNode ;
                   break ;
                }else{
                   temp = temp->left ;
                }
            }
        }
     }
     return head ;
   }
   void inorder(node* head){
    node* temp = head ;
    if(temp == NULL) return ;
    inorder(head->left);
    cout<<temp->data<<" ";
    inorder(head->right);
   }

    void Search(node *head, int key){
    node* temp = head ;
    if(temp->data == key){
        cout<<"element found";
        return  ;
    }
    if(key > temp->data){
        Search(head->right,key);
    }else{
        Search(head->left,key);
    }
   }

};
int main(){
    node* head = NULL ;
    binaryTree b ;
    head = b.insert(head,10) ;
    b.insert(head,20);
    b.insert(head,30);
    b.inorder(head);
    b.Search(head,20);
    return 0;
}