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

void insert_at_head(Node* &head, int val){
    Node* newNode = new Node(val);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void reverse(Node* tail){
    for (Node* tmp = tail; tmp != NULL; tmp = tmp->prev)
    {
        cout << tmp->val << " ";
    }
    cout << endl;
}

void insert_at_position(Node* head, int val, int pos){
    Node* newNode = new Node(val);
    Node* tmp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        tmp = (*tmp).next;
    }
    newNode->next = tmp->next->next;
    tmp->next = newNode;

    newNode->prev = tmp;
    newNode->next->prev = newNode;
}

void delete_at_position(Node* head, int pos){
    Node* tmp = head;
    for (int i = 0; i < pos-1; i++)
    {
        tmp = tmp->next;
    }
    // cout << tmp->prev->val << " " << tmp->next->val << endl;
    tmp->next = tmp->next->next;
    tmp->next->prev = tmp;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int n;
    while (cin >> n && n != -1)
    {
        insert(head, tail, n);
    }

    insert_at_position(head, 100, 2);
    delete_at_position(head, 1);
    
    print(head);
    reverse(tail);

    return 0;
}