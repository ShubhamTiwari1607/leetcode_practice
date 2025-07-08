#include <bits/stdc++.h>
using namespace std;

class node
{
private:
    int data;
    node *next;

public:
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class linked_list
{
    private :
       node* root;
    public :

    linked_list(int data){
       root = new node(data);
    }

    void insert(int data){
        node* temp = root ;
        while(temp->)
    }
};