#include<bits/stdc++.h>
using namespace std ;

class node{
    public:
    int val;
    node* next;
};
class linked_list{
    public:

    void create(node* &head,int val){
        if(head == nullptr){
            node* newNode =  new node ;
            newNode->val = val ;
            newNode->next = nullptr ;
            head = newNode ;
            return;
        }
        node* temp =head;
        while(temp->next != nullptr){
            temp=temp->next;
        }
        node* newNode = new node ;
        newNode->val =  val ;
        newNode->next = nullptr ;
        temp->next = newNode ;
    }

    node* removek(node* head, int k){
        while(head->val == k && head!= nullptr){
            head = head->next ;
        }
        node*temp = head ;
        while(temp!= nullptr&&temp->next!=nullptr){
           if(temp->next->val == k){
            temp->next=temp->next->next;
           }else{
            temp = temp->next;
           }
        }
        return head ;
    }

    void traverse(node* head){
        node* temp = head ;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next ;
        }
        cout<<endl;
    }
};

int main(){
    linked_list l ;
    node* root = nullptr ;
    l.create(root,6);
    l.create(root,6);
    l.create(root,4);
    l.create(root,3);
    l.create(root,9);
    l.create(root,11);
    l.create(root,6);
    l.traverse(root);
    root= l.removek(root,6);
    l.traverse(root);
    return 0; 
}
    