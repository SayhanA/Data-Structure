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

Node *create_linked_list()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (cin >> val && val != -1)
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
            tail = newNode;
        }
    }
    return head;
}

// int find_biggest(Node* head){
//     Node* tmp = head;
//     int biggest = head->val;
//     while (tmp != NULL)
//     {
//         if(tmp->val > biggest ){
//             biggest = tmp->val;
//         }
//         tmp = tmp->next;
//     }
//     return biggest;
// }
int find_biggest(Node *head)
{
    int biggest = head->val;
    for (Node *tmp = head; tmp != NULL; tmp = tmp->next)
    {
        if (tmp->val > biggest)
        {
            biggest = tmp->val;
        }
    }
    return biggest;
}

int find_lowest(Node *head)
{
    Node *tmp = head;
    int lowest = head->val;

    while (tmp != NULL)
    {
        if (tmp->val < lowest)
        {
            lowest = tmp->val;
        }
        tmp = tmp->next;
    }
    return lowest;
}

int main()
{
    Node *list = create_linked_list();

    cout << find_biggest(list) - find_lowest(list) << endl;

    return 0;
}