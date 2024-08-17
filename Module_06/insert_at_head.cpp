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

void Insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node *tmp = head;
        while (tmp->next != NULL)
        {
            tmp = tmp->next;
        }
        tmp->next = newNode;
    }
    cout << endl;
}

void print_linked_list(Node *head)
{
    Node *tmp = head;
    cout << "Linked List values:";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = (*tmp).next;
    }
    // cout << endl;
}

void insert_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);

    newNode->next = head;
    head = newNode;
}

// Insert at any position
void insert_at_any_position(Node *head, int val, int position)
{
    Node *newNode = new Node(val);

    Node *tmp = head;
    for (int i = 0; i < position - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}

// Delete form a Position function
void delete_for_position(Node* head, int position){
    Node* tmp = head;           
    for (int i = 0; i < position-1; i++)
    {
        tmp = tmp->next;
    }
    Node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}

int main()
{
    Node *head = NULL;

    cout << "Option 1: Insert in the tail\n";
    cout << "Option 2: Print Link list\n";
    cout << "Option 3: Insert into head\n";
    cout << "Option 4: Insert In a Position\n";
    cout << "Option 5: Delete from Position\n";

    int opt;

    while (true)
    {
        cout << "\nInsert a option:";
        cin >> opt;

        if (opt == 1)
        {
            int val;
            cout << "Input a Node value: ";
            cin >> val;
            Insert_at_tail(head, val);
        }
        else if (opt == 2)
        {
            print_linked_list(head);
        }
        else if (opt == 3)
        {
            int val;
            cout << "\nInput a Node value in the head: ";
            cin >> val;
            insert_at_head(head, val);
        }
        else if (opt == 4)
        {
            int val, position;
            cout << "\nInsert value:";
            cin >> val;
            cout << "Insert Position:",
                cin >> position;
            insert_at_any_position(head, val, position);
        }
        else if(opt == 5){
            int position;
            cout << "\nInsert a Position to Delete:";
            cin >> position;
            delete_for_position(head, position);
        }
    }

    return 0;
}