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

Node* binaryLevelInput(){
    int val, l, r;
    Node* root, *temp, *left, *right;

    cin >> val;
    if(val == -1) root = NULL;
    else root = new Node(val);

    queue<Node*> q;
    if(root) q.push(root);

    while (!q.empty())
    {
        temp = q.front();
        q.pop();

        cin >> l >> r;
        if(l == -1) left = NULL;
        else left = new Node(l);
        if(r == -1) right = NULL;
        else right = new Node(r);

        temp->left = left;
        temp->right = right;

        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);
    }
    return root;
}

void binaryLevelOutput(Node* root){
    if(root == NULL) return;
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

void fun(Node* root, vector<int>& v){
    if(root == NULL) return;
    if(root->left == NULL && root->right == NULL) v.push_back(root->val);
    if(root->left != NULL) fun(root->left, v);
    if(root->right != NULL) fun(root->right, v);
}

int main(){
    Node* root1 = binaryLevelInput();
    Node* root2 = binaryLevelInput();
    
    vector<int> v1;
    fun(root1, v1);

    vector<int> v2;
    fun(root2, v2);

    // for(int val:v1){
    //     cout << val << " ";
    // }

    // for(int val:v2){
    //     cout << val << " ";
    // }

    if(v1 == v2) cout << "true" << endl;
    else cout << "false" << endl;
    
    return 0;
}