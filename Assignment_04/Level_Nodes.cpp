// #include <bits/stdc++.h>
// using namespace std;

// class Node{
//     public:
//     int val;
//     Node* left;
//     Node* right;

//     Node(int val){
//         this->val = val;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };

// Node* binaryLevelInput(){
//     int val, l, r;
//     Node* root, *temp, *left, *right;

//     cin >> val;
//     if(val == -1) root = NULL;
//     else root = new Node(val);

//     queue<Node*> q;
//     if(root) q.push(root);

//     if(q.empty()) cout << true << endl;
//     while (!q.empty())
//     {
//         temp = q.front();
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

// void binaryLevelOutput(Node* root){
//     if(root == NULL) return;
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

// void levelNodes(Node* root, int level, queue<int>& p){
//     if(root == NULL) return;
//     queue<Node*> q;
//     if(root) q.push(root);

//     int count = pow(2, level+1) - 1;

//     while (count--)
//     {
//         Node* temp = q.front();
//         q.pop();

//         cout << temp->val << " ";
//         if(temp->val) p.push(temp->val);

//         if(temp->left) q.push(temp->left);
//         if(temp->right) q.push(temp->right);
//     }
// }

// int main(){
//     Node* root = binaryLevelInput();
//     // binaryLevelOutput(root);
//     // cout << endl;

//     queue<int> q;
    
//     int level;
//     cin >> level;

//     levelNodes(root, level, q);

//     for (int i = 0; i < pow(2, (level - 1) + 1) - 1; i++)
//     {
//         q.pop();
//     }
    
//     while (!q.empty())
//     {
//         cout << q.front() << " ";
//         q.pop();
//     }
    
    
    
//     return 0;
// }


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
    if(val == -1) return NULL;
    else root = new Node(val);

    queue<Node*> q;
    q.push(root);

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

void printLevel(Node* root, int level){
    if(root == NULL) return;

    queue<Node*> q;
    q.push(root);
    int currentLevel = 0;

    while (!q.empty()){
        int size = q.size(); 

        if(currentLevel == level){
            while(size--){
                Node* temp = q.front();
                q.pop();
                cout << temp->val << " ";
            }
            return; 
        }

        while(size--){
            Node* temp = q.front();
            q.pop();

            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }

        currentLevel++; 
    }
      cout << "Invalid" << endl;
}

int main(){
    Node* root = binaryLevelInput();

    int level, currentLevel;
    cin >> level;

    printLevel(root, level);

    return 0;
}
