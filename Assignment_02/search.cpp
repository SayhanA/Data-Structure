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

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

void input()
{
    Node *list = create_linked_list();

    int search_num;
    cin >> search_num;

    Node* tmp = list;

    int count = 0;
    while (tmp != NULL)
    {
        count++;
        if(tmp->val == search_num){ 
            cout << count-1 << endl;
            return;
        }
        tmp = tmp->next;
    }
    
    cout << -1 << endl;
}

int main()
{
    int tast_case;
    cin >> tast_case;

    while (tast_case > 0)
    {
        input();
        tast_case--;
    }

    return 0;
}