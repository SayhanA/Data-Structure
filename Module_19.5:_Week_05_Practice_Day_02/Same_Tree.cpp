#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *binaryLevelInput()
{
    int val, l, r;
    Node *root, *temp, *left, *right;

    cin >> val;
    if (val == -1)
        return NULL;

    root = new Node(val);

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        temp = q.front();
        q.pop();

        cin >> l >> r;

        if (l != -1)
        {
            left = new Node(l);
            temp->left = left;
            q.push(left);
        }

        if (r != -1)
        {
            right = new Node(r);
            temp->right = right;
            q.push(right);
        }
    }
    return root;
}

bool isSameTree(Node* p, Node* q) {
    if (p == NULL && q == NULL) return true;
    
    if (p == NULL || q == NULL) return false;
    
    return (p->val == q->val) && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}

int main()
{
    Node *root1 = binaryLevelInput();
    Node *root2 = binaryLevelInput();

    if (isSameTree(root1, root2))
        cout << "true";
    else
        cout << "false";

    return 0;
}
