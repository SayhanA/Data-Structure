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
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class myStack
{
public:
    Node *head = NULL;
    int stackSize = 0;

    void push(int val)
    {
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = newNode;
            stackSize = 1;
        }
        else
        {
            newNode->next = head;
            head = newNode;
            stackSize++;
        }
    }

    void pop()
    {
        stackSize--;
        Node *deleteNode = head;
        if (head->next != NULL)
        {
            head = head->next;
        }
        delete deleteNode;
    }

    int top()
    {
        return head->val;
    }

    int size()
    {
        return stackSize;
    }

    bool empty()
    {
        return stackSize == 0 ? true : false;
    }
};

class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int queue_size = 0;

    void push(int val)
    {
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            queue_size = 1;
        }
        else
        {
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
            queue_size++;
        }
    }

    void pop()
    {
        Node *deleteNode = head;
        if (head->next != NULL)
        {
            head->next->prev = NULL;
            head = head->next;
        }
        else
        {
            head = NULL;
            tail = NULL;
        }
        delete deleteNode;
        queue_size--;
    }

    int front()
    {
        return head->val;
    }

    int back(){
        return tail && tail->val;
    }

    int size()
    {
        return queue_size;
    }

    bool empty(){
        return queue_size == 0 ? true : false;
    }
};

int main()
{
    myStack s;
    myQueue q;
    bool is = true;

    int n, m;
    cin >> n >> m;
    if (n == m)
    {
        int val;
        for (int i = 0; i < n; i++)
        {
            cin >> val;
            s.push(val);
        }

        for (int i = 0; i < n; i++)
        {
            cin >> val;
            q.push(val);
        }
        
        for (int i = 0; i < n; i++)
        {
            if(s.top() == q.front()){
                s.pop();
                q.pop();
            }else{
                is = false;
                s.pop();
                q.pop();
            }
        }
        
    }else{
        is = false;
    }

    is ? cout << "YES\n" : cout << "NO\n";

    return 0;
}