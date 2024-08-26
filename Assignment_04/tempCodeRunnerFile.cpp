int binaryLevelOutput(Node* root){
    int total = 0;
    if(root == NULL) return 0;
    queue<Node*> q;
    if(root) q.push(root);

    while (!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        // cout << temp->val << " ";
        if(temp->left == NULL && temp->right == NULL){

        }else{
            total+=temp->val;
        }
        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);
    }
    return total;
}
