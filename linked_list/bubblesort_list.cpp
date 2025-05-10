#include<iostream> //single linked list
using namespace std ;

class node{
    public:
    int data ;
    node* right ;
};
//Count the number of node in the list
int node_count(node* head){
    int count = 0;
    node* temp=head;
    while(temp!=NULL){
        count++;
        temp = temp->right ;
    }
    return count ;
}

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
 //BUBBLE sort
void bubble_Sort(node* head) {
    if (head == nullptr || head->right == nullptr) {
        // Empty list or single-node list, no sorting needed
        return;
    }
    
    int n = node_count(head); 
    for (int i = 0; i < n - 1; i++) {
        node* temp = head;
        for (int j = 0; j < n - i - 1; j++) {
            if (temp->data > temp->right->data) {
                // Swap data of the nodes
                int swap = temp->data;
                temp->data = temp->right->data;
                temp->right->data = swap;
            }
            temp = temp->right; // Move to the next node
        }
    }
}



int main(){
   
    node *head = NULL ;
    
    head = create(head,60);
    head = create(head,30);
    head = create(head,25);
    head = create(head,10);
    head = create(head,16);
    
    bubble_Sort(head);
    traversal(head);
    
    return 0;
}