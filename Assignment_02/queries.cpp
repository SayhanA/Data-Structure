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

void insert_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void insert_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);

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
        tmp = newNode;
    }
}

void delete_Node(Node *&head, int position)
{
    if (head == NULL)
    {
        return;
    }
    else
    {
        if (position == 0)
        {
            Node *deletehead = head;
            head = head->next;
            delete deletehead;
        }
        else
        {
            Node *tmp = head;
            for (int i = 0; i < position - 1; i++)
            {
                if (tmp->next != NULL)
                {
                    tmp = tmp->next;
                }
            }

            if (tmp->next != NULL)
            {
                Node *deleteNode = tmp->next;
                tmp->next = tmp->next->next;
                delete deleteNode;
            }
        }
    }
}

int main()
{
    Node *head = NULL;

    int n;
    cin >> n;

    while (n--)
    {
        int opt, val;
        cin >> opt >> val;
        if (opt == 0)
        {
            insert_at_head(head, val);
        }
        else if (opt == 1)
        {
            insert_tail(head, val);
        }
        else if (opt == 2)
        {
            delete_Node(head, val);
        }

        print_linked_list(head);
    }

    return 0;
}