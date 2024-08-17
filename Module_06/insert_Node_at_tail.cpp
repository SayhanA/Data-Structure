#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        (*this).val = val;
        (*this).next = NULL;
    }
};

void insertAtTail(Node *&head, int v)
{
    // Initialization of a Dynamic Node
    Node *newNode = new Node(v);

    if (head == NULL)
    {
        head = newNode;
    }

    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void printLinkedList(Node *head)
{
    Node *temp = head;
    cout << "Linked List values:";
    while (temp != NULL)
    {
        cout << (*temp).val << " ";
        temp = (*temp).next;
    }
    cout << endl;
}

int main()
{
    // Initial Node
    Node *head = NULL;

    int val;
    while (cin >> val)
    {
        insertAtTail(head, val);
    }

    printLinkedList(head);

    return 0;
}