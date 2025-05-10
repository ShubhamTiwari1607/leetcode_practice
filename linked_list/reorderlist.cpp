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

    node *getHead()
    {
        return head;
    }

    void reverse()
    {
        node *prev = nullptr;
        node *curr = head;
        while (curr != NULL)
        {
            node *front = curr->next;
            curr->next = prev;
            prev = curr;
            curr = front;
        }
        head = prev;
    }
    void reorderList()
    {
        if (!head || !head->next || !head->next->next)
            return; // Edge cases

        node *slow = head, *fast = head;
        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        node *prev = nullptr, *curr = slow->next;
        slow->next = nullptr; // Break first half

        while (curr)
        {
            node *front = curr->next;
            curr->next = prev;
            prev = curr;
            curr = front;
        }

        // Step 3: Merge both halves
        node *first = head, *second = prev;
        while (second)
        {
            node *temp1 = first->next, *temp2 = second->next;
            first->next = second;
            second->next = temp1;
            first = temp1;
            second = temp2;
        }
    }
};

int main()
{
    linkedList obj(1);
    obj.insert(2);
    obj.insert(3);
    obj.insert(4);
    obj.reorderList();
    obj.traverse();

    return 0;
}