#include<iostream>
using namespace std ;

class node{
    public:
    int val;
    node* next;
    node(int val){
        this->val = val;
        this->next = nullptr ;
    }
};

class linkedlist{
    node* head;
    public:
    
    linkedlist(int val){
        head = new node(val);
    }

    void insert(int val){
        node* temp = head ;
        while(temp->next !=  nullptr){
            temp = temp->next ;
        }
        node* newNode = new node(val);
        temp->next = newNode;
    }
    
    void traversal(){
        node* temp = head ;
        while(temp != nullptr){
          cout << temp->val <<" ";
          temp = temp->next;
        }
    }

    void reverse(){
        node *prev = nullptr, *curr = head ,*next;
        while( curr != nullptr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next; 
        }
        head = prev;
    }

    int mid(){
        node *slow = head, *fast = head;
        while(fast != nullptr && fast->next != nullptr){  // fix condition
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow->val;
    }
   
};

int main(){
    linkedlist l1(10) ;
    l1.insert(20);
    l1.insert(30);
    l1.insert(40);
    l1.insert(50);
    l1.insert(60);
    l1.insert(80);
    l1.traversal();
    l1.reverse();
    cout<<"\nreversed list\n";
    l1.traversal();
    cout<<"\n";
    int  res =  l1.mid();
    cout << res;
    return 0;

}