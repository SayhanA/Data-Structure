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

int size_of_list(Node* head){
    Node* tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}

int main()
{
    Node *list = create_linked_list();
    Node *list_1 = create_linked_list();

    Node* tmp = list;
    Node* tmp_1 = list_1;
    int count = 0;

    if(size_of_list(list) != size_of_list(list_1)){
        cout << "NO\n";
        return 0;
    }
    
    while (tmp != NULL && tmp_1 != NULL)
    {
        if(tmp->val != tmp_1->val){
            cout << "NO\n";
            return 0;
        }
        tmp = tmp->next;
        tmp_1 = tmp_1->next;
    }
    cout << "YES\n";

    return 0;
}