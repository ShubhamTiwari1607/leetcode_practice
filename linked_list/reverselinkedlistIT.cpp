#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int val;
    node *next;
    node(int data)
    {
        val = data;
        next = NULL;
    }
};
class linkedList
{
private:
    node *head;

public:
    linkedList(int val)
    {
        head = new node(val);
    }

    void insert(int val)
    {
        if (head == nullptr)
        {
            head = new node(val);
            return;
        }
        node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        node *newNode = new node(val);
        temp->next = newNode;
    }

    void traverse()
    {
        node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
    }

    node* getHead(){
        return head;
    }

    void reverse(){
        node* prev = nullptr;
        node* curr = head;
        while(curr!=NULL){
            node* front = curr->next;
            curr->next = prev;
            prev = curr;
            curr = front;
        }
        head = prev;
    }
    
};

int main()
{
    linkedList obj(10);
    obj.insert(20);
    obj.insert(30);
    obj.insert(40);
    obj.insert(50);
    obj.insert(60);
    obj.traverse();
    cout<<"\nlist after reversing \n";
    obj.reverse();
    obj.traverse();
    return 0;
}