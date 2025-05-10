#include<iostream> //single linked list
using namespace std ;

class node{
    public:
    int data ;
    node* right ;
};

node* create(node* head, int val){  //Creation of the linked list
   if(head == nullptr){
    node* newNode = new node ;
    newNode->data = val;
    newNode->right = NULL;
    return newNode ;
   }
   node* temp = head ;
   while(temp->right != NULL){
      temp = temp->right ;
   }
   node* newNode = new node;
   newNode->data = val ;
   newNode ->right = NULL;
   temp->right =  newNode ;
   return head ;
} 

void traversal(node* head){  //traversal 
    node* temp= head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->right ;
    }
}

//instertion sort
node* insertionSort(node* head){
    node* dummy = new node;
    dummy->data = 1000;
    dummy->right = nullptr ;
    
    while(head!=NULL){
        node* temp= dummy ;
        while(temp->right && temp->right->data < head->data){
            temp= temp->right ;
        }
        node* newNode = new node ;
        newNode->data = head->data;
        newNode->right = temp->right ;
        temp->right = newNode ;
        head = head->right ; 
    }
    return dummy->right;
}

int main(){
   
    node *head = NULL ;
    
    for(int i=9 ;i>0;i--){
      head =  create(head,i);
    }
    head = insertionSort(head) ;
    traversal(head);
    
    return 0;
}