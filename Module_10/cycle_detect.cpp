#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    };
};

void insert(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
    }
    else{
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
};

void print(Node* head){
    for (Node* tmp = head; tmp != NULL; tmp=tmp->next)
    {
        cout << tmp->val << " ";
    }
    cout << endl;
}

int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = NULL;

    Node* slow = head;
    Node* fast = head;

    bool flag = false;
    while (fast != NULL && fast->next != NULL)            
    {
        slow = slow->next;
        fast = fast->next->next;
        
        if(fast == slow){
            flag = true;
            break;
        }
    }
    flag ? cout << "Cycle Detected\n" : cout << "No Cycle Detected\n";
    
    return 0;
}