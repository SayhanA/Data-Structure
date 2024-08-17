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

void print(Node *head)
{
    for (Node *tmp = head; tmp != NULL; tmp = tmp->next)
    {
        cout << tmp->val << " ";
    }
    cout << endl;
}

bool palindrom(Node *head, Node *tail, int size)
{
    Node *tmp = head;
    Node *tmp_prev = tail;
    bool isPalindrom = true;

    for (int i = 0; i < size / 2; i++)
    {
        if (tmp->val == tmp_prev->val)
        {
            isPalindrom = true;
        }
        else
        {
            isPalindrom = false;
            return isPalindrom;
        }
        tmp = tmp->next;
        tmp_prev = tmp_prev->prev;
    }
    return isPalindrom;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int n;
    while (cin >> n && n != -1)
    {
        insert(head, tail, n);
    }
    int size = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        ++size;
        tmp = tmp->next;
    }
    // print(head);
    palindrom(head, tail, size) ? cout << "YES" : cout << "NO";

    return 0;
}