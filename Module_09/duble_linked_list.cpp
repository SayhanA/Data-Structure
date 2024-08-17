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
    }
};

// size of list
int size(Node *head)
{
    int count = 0;
    for (Node *tmp = head; tmp != NULL; tmp = tmp->next)
    {
        count++;
    }
    return count;
}

// Insert at head of a Duble Linked LIst
void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void insert(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void print(Node *head)
{
    for (Node *tmp = head; tmp != NULL; tmp = tmp->next)
    {
        cout << tmp->val << " ";
    }
    cout << endl;
}

void print_reverse(Node *tail)
{
    for (Node *tmp = tail; tmp != NULL; tmp = tmp->prev)
    {
        cout << tmp->val << " ";
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (cin >> val && val != -1)
    {
        insert(head, tail, val);
    }
    print(head);
    print_reverse(tail);

    cout << "\nAfter inserting on head\n";
    insert_at_head(head, tail, 100);
    insert_at_head(head, tail, 120);
    print(head);
    print_reverse(tail);

    cout << size(head) << endl;
    return 0;
}