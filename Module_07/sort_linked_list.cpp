#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node* &head, Node* &tail, int val){
    Node* newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        tail = newNode;
    }
    else{
        tail->next = newNode;
        tail = newNode;
    }
}

void sort_linked_list(Node* head){
    Node* tmp = head;
    for (Node* i = head; i !=NULL; i = i->next)
    {
        for (Node* j = i; j !=NULL; j = j->next)
        {
            if(i->val > j->val){
                int tmp = i->val;
                i->val = j->val;
                j->val = tmp;
            }
        }
    }
}

void print_linked_list(Node* head){
    Node* tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while (cin >> val && val != -1)
    {
        insert_at_tail(head, tail, val);
    }
    sort_linked_list(head);
    print_linked_list(head);
    cout << endl;
    
    return 0;
}