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

Node* convert(int a[], int l,  int r ){
    if(l>r) return NULL;
    
    int middle = l + (r - l) / 2;
    Node* root = new Node(a[middle]);

    Node* left = convert(a, l, middle-1);
    Node* right = convert(a, middle+1, r);

    root->left = left;
    root->right = right;

    return root;
}

int main(){
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) cin >> a[i];
    Node* root = convert(a, 0, n-1);

    binaryLevelOutput(root);
    
    return 0;
}