#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;

    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// Node* input(){
//     int val, l, r;
//     Node* root, *temp, *left, *right;

//     if(val == -1) root = NULL;
//     else root = new Node(val);

//     queue<Node*> q;
//     if(root) q.push(root);

//     while (!q.empty())
//     {
//         Node* temp = q.front();
//         q.pop();

//         cin >> l >> r;
//         if(l == -1) left = NULL;
//         else left = new Node(l);
//         if(r == -1) right = NULL;
//         else right = new Node(r);

//         temp->left = left;
//         temp->right = right;

//         if(temp->left) q.push(temp->left);
//         if(temp->right) q.push(temp->right);
//     }

//     return root;
// }

Node* input(){
    int val, l, r;
    cin >> val;
    Node* root, *left, *right;
    
    if(val == -1) root = NULL;
    else root = new Node(val);

    queue<Node*> q;
    if(root) q.push(root);

    while (!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        cin >> l >> r;

        if(l == -1) left = NULL;
        else left = new Node(l);

        if(r == -1) right = NULL;
        else right = new Node(r);

        if(left) temp->left = left;
        if(right) temp->right = right;

        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);

    }
    return root;
}

void print(Node* root){
    queue<Node*> q;
    if(root) q.push(root);

    while (!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        cout << temp->val << " ";
        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);
    }
    
}

int count_leaf(Node* root){
    if(root == NULL) return 0;
    if(root->left == NULL && root->right == NULL) return 1;
    else{
        int l = count_leaf(root->left);
        int r = count_leaf(root->right);
        return l+r;
    }
}

int main(){
    Node* root = input();
    cout << count_leaf(root);
    
    return 0;
}