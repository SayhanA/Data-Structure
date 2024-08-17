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
        (*this).next = next;
    }
};

int main()
{
    Node *head = new Node(5);
    Node *a = new Node(7);
    Node *b = new Node(1);
    Node *c = new Node(14);
    Node *d = new Node(3);
    Node *e = new Node(11);

    (*head).next = a;
    (*a).next = b;
    (*b).next = c;
    (*c).next = d;
    (*d).next = e;

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }

    int sum = 0;
    temp = head;
    while (temp->next != 1020)
    {
        sum += temp->val;
        temp = temp->next;
    };
    sum -= temp->val;

    return 0;
}