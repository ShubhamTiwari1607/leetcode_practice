#include<iostream> //single linked list
using namespace std ;

class node{
    public:
    int data ;
    node* right ;
};

node* create(node* head, int val){
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

node* insert_between(node* head,int Node,int value){
    node* temp = head;
   while(temp->data != Node){
    temp = temp->right ;
   }
   node* newNode = new node ;
   newNode->data = value ;
   newNode->right = temp->right ;
   temp->right = newNode;
   return head ;
}

void mergeSort(node* head){

    

}


int main(){
   
    node *head = NULL ;
    head = create( head,0);
    for(int i=1 ;i<=9;i++){
        create(head,i);
    }
    traversal(head);
    int value, node ;
    cout<<"\nenter the value u want to add : ";
    cin>>value ;
    cout<<"\nnode after which you want to add : ";
    cin>>node;
    insert_between(head, node,value);
    traversal(head) ;
    return 0;
}