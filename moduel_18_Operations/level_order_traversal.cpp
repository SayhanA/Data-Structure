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

// void level_print(Node* root){
//     // make a queue and push the level node on the queue;
//     queue<Node*> q;
//     q.push(root);

//     while (!q.empty())                      // checking is q empty
//     {                                       // put data in a paramiter before delete
//         Node* pri = q.front();              // delete queue
//         q.pop();

//         cout << pri->val << " ";            // Print the value
//         if(pri->left) q.push(pri->left);    // put the left value in the queue
//         if(pri->right) q.push(pri->right);  // put the right value in the queue
//     }
    
// }

void level_order(Node* root){
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* p = q.front();
        q.pop();

        cout << p->val << " ";
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
}

int main(){
    Node* root = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* e = new Node(60);
    Node* f = new Node(70);
    Node* g = new Node(80);
    Node* h = new Node(90);
    Node* i = new Node(100);

    root->left = a;
    root->right = b;
    a->left = c;
    a->right = h;
    b->right = d;
    c->right = e;
    h->right = i;
    d->left = f;
    d->right = g;
    
    // level_print(root);
    cout << endl;

    level_order(root);
    
    return 0;
}