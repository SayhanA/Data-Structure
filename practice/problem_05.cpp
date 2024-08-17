#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node* tmp = head;
        while (tmp->next != NULL)
        {
            tmp = tmp->next;
        }
        tmp->next = newNode;
    }
}

void print_LinkedList(Node* head){
    cout << "Linked List values: ";
    Node* tmp = head;
    while(tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void is_sorted(Node* head){
    Node* tmp = head;
    while (tmp->next != NULL)
    {
        if(tmp->val > tmp->next->val){
            cout << "NO\n";
            return;
        }
        tmp = tmp->next;
    }
    cout << "YES\n";
}

int main()
{
    Node *head = NULL;

    int n;
    while (cin >> n && n != -1)
    {
        insert_at_tail(head, n);
    }
    // print_LinkedList(head);
    is_sorted(head);

    return 0;
}