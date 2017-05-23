/* A tree Node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */


void reversePrint(Node *root)
{
    if(root == NULL)  return;
    reversePrint(root->left);
    reversePrint(root->right);
    cout<<root->data<<" ";
}
