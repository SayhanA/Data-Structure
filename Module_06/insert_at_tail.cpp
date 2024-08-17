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

void insert_at_tail(Node *&head, int v)
{
    // Creating new node
    Node *newNode = new Node(v);

    // If there is no Node
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    // Inserting a node
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
};

void print_linked_list(Node *head)
{
    Node *tmp = head;
    cout << "Nosde Linded List:";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;

    while (true)
    {
        cout << "Option 1: Insert at Tail" << endl;
        cout << "Option 2: Print Linked List" << endl;
        cout << "Option 3: Terminate" << endl;

        int opt;
        cin >> opt;
        if (opt == 1)
        {
            cout << "Please insert a value:" << endl;
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (opt == 2)
        {
            cout << "Node list\n";
            print_linked_list(head);
        }

        else if (opt == 3)
        {
            break;
        }
    }

    return 0;
}