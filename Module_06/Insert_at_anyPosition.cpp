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

void InsertAtTail(Node *&head, int val)
{
    // initializing a dynamic node
    Node *newNode = new Node(val);

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
};

void printLinkedList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int main()
{
    // Initializing NULL head;
    Node *head = NULL;

    string line;
    cout << "Please Input the list of the elements in one line:";
    getline(cin, line);

    stringstream item(line);
    int n;

    cout << "Linked List Values:";
    while (item >> n)
    {
        InsertAtTail(head, n);
    }
    printLinkedList(head);
    cout << "\nMain Function Stoped\n";

    return 0;
}