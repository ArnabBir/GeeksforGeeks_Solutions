void BToDLL(Node *root, Node **head_ref)
{
    if(root == NULL)    return;
    BToDLL(root->right, head_ref);
    root->right = *head_ref;
    if(*head_ref != NULL){
        (*head_ref)->left = root;
    }
    *head_ref = root;
    BToDLL(root->left, head_ref);
}
