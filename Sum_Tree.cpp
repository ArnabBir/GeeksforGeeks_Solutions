int sumTree(Node * root){
    if(root == NULL)    return 0;
    return root->data + sumTree(root->left) + sumTree(root->right);
}

bool isSumTree(Node* root)
{
    if(root == NULL)    return true;
    if(root->left == NULL && root->right == NULL)   return true;
    if(!(sumTree(root->left) + sumTree(root->right) == root->data))    return false;
    if(!isSumTree(root->left) || !isSumTree(root->right)) return false;
    return true;
}
