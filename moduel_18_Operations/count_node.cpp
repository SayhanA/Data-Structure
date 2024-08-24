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

// void output(Node* root){
//     queue<Node*> q;
//     if(root) q.push(root);

//     while (!q.empty())
//     {
//         Node* temp = q.front();
//         q.pop();

//         cout << temp->val << " ";

//         if(temp->left) q.push(temp->left);
//         if(temp->right) q.push(temp->right);
//     } 
// }

int count(Node* root){
    if(!root) return 0;

    int l = count(root->left);
    int r = count(root->right);

    return l+r+1;
}

int main(){
    Node* root = input();
    cout << count(root);
    
    return 0;
}