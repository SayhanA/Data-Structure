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
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        temp = q.front();
        q.pop();

        cin >> l >> r;
        if (l == -1)
            left = NULL;
        else
            left = new Node(l);
        if (r == -1)
            right = NULL;
        else
            right = new Node(r);

        temp->left = left;
        temp->right = right;

        if (temp->left)
            q.push(temp->left);
        if (temp->right)
            q.push(temp->right);
    }
    return root;
}

void binaryLevelOutput(Node *root)
{
    if (root == NULL)
        return;
    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        cout << temp->val << " ";

        if (temp->left)
            q.push(temp->left);
        if (temp->right)
            q.push(temp->right);
    }
}

bool checkTree(Node *root)
{
    if (root->left->val + root->right->val == root->val)
        return true;
    return false;
}

int main()
{
    Node *root = binaryLevelInput();
    cout << checkTree(root);

    return 0;
}