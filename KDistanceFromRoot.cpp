void printKdistance(Node *root, int k)
{
// Your code here
    if(root == NULL){return;}
    if(k == 0)  cout<<root->data<<" ";

    else {
        if(root->left)  printKdistance(root->left, k-1);
        if(root->right) printKdistance(root->right, k-1);
    }
}
