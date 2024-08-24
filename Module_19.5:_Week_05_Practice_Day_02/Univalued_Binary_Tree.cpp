// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *left;
//     Node *right;

//     Node(int val)
//     {
//         this->val = val;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };

// Node *binaryLevelInput()
// {
//     int val, l, r;
//     Node *root, *temp, *left, *right;

//     cin >> val;
//     if (val == -1)
//         root = NULL;
//     else
//         root = new Node(val);

//     queue<Node *> q;
//     if (root)
//         q.push(root);

//     while (!q.empty())
//     {
//         temp = q.front();
//         q.pop();

//         cin >> l >> r;
//         if (l == -1)
//             left = NULL;
//         else
//             left = new Node(l);
//         if (r == -1)
//             right = NULL;
//         else
//             right = new Node(r);

//         temp->left = left;
//         temp->right = right;

//         if (temp->left)
//             q.push(temp->left);
//         if (temp->right)
//             q.push(temp->right);
//     }
//     return root;
// }

// bool isUniValid(Node *root)
// {   
//     if(root){
//         if(root->left){
//             if(root->val != root->left->val) return false;
//         }
//         if(root->right){
//             if(root->val != root->right->val) return false;
//         }
//     }
//     bool l, r;
//     if(root->left) l = isUniValid(root->left);
//     if(root->right) r = isUniValid(root->right);

//     if(!l || !r) return false;
    
//     return true;
// }

// void binaryLevelOutput(Node *root)
// {
//     if (root == NULL)
//         return;
//     queue<Node *> q;
//     if (root)
//         q.push(root);

//     while (!q.empty())
//     {
//         Node *temp = q.front();
//         q.pop();

//         cout << temp->val << " ";

//         if (temp->left)
//             q.push(temp->left);
//         if (temp->right)
//             q.push(temp->right);
//     }
// }

// int main()
// {
//     Node *root = binaryLevelInput();
//     binaryLevelOutput(root);
//     cout << endl;
//     cout << isUniValid(root);

//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* binaryLevelInput() {
    int val, l, r;
    Node *root, *temp, *left, *right;

    cin >> val;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node*> q;
    if (root)
        q.push(root);

    while (!q.empty()) {
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

bool isUniValid(Node* root) {
    if (root == NULL)
        return true;

    bool l = isUniValid(root->left);
    bool r = isUniValid(root->right);

    if (root->left && root->val != root->left->val)
        return false;

    if (root->right && root->val != root->right->val)
        return false;

    return l && r;
}

void binaryLevelOutput(Node* root) {
    if (root == NULL)
        return;
    queue<Node*> q;
    if (root)
        q.push(root);

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();

        cout << temp->val << " ";

        if (temp->left)
            q.push(temp->left);
        if (temp->right)
            q.push(temp->right);
    }
}

int main() {
    Node* root = binaryLevelInput();
    binaryLevelOutput(root);
    cout << endl;

    if (isUniValid(root))
        cout << "True";
    else
        cout << "False";

    return 0;
}
