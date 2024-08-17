#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        (*this).val = val;
        (*this).next = NULL;
        (*this).prev = NULL;
    }
};

class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val)
    {
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            sz = 1;
            head = newNode;
            tail = newNode;
        }
        else
        {
            sz++;
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
    }
    void pop(){
        sz--;
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        if(head == NULL){
            tail = NULL;
        }
    }
    int front(){
        return head->val;
    }
    int size(){
        return sz;
    }
    bool empty(){
        if(sz == 0) return true;
        else return false;
    }
};

int main()
{
    myQueue q;
    int n;
    cin >> n;
    while (n--)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    
    
    return 0;
}