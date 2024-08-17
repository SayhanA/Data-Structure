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
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
};

void insert_at_position(Node *&head, int val, int pos)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 0; i < pos-1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    newNode->prev = tmp;
    tmp->next = newNode;
    newNode->next->prev = newNode;
}

void insert_at_head(Node *&head, Node* &tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }else{
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void print(Node *head)
{
    cout << "L -> ";
    for (Node *tmp = head; tmp != NULL; tmp = tmp->next)
    {
        cout << tmp->val << " ";
    }
    cout << endl;
}

void reverse(Node *tail)
{
    cout << "R -> ";
    for (Node *tmp = tail; tmp != NULL; tmp = tmp->prev)
    {
        cout << tmp->val << " ";
    }
    cout << endl;
}

int size(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int n;
    cin >> n;
    while (n--)
    {
        int pos;
        cin >> pos;

        int val;
        cin >> val;

        if (pos > size(head))
        {
            cout << "Invalid\n";
        }
        else
        {
            if (pos == 0)
            {
                insert_at_head(head, tail, val);
            }
            else if (pos == size(head))
            {
                insert(head, tail, val);
            }
            else
            {
                insert_at_position(head, val, pos);
            }
            print(head);
            reverse(tail);
        }

        // cout << pos << " " << val << endl;
    }

    return 0;
}