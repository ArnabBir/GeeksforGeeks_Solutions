class Solution
{
    public: 
    Node * bToDLL(Node *root)
    {
        if(!root)   return nullptr;
        
        Node* lnode = bToDLL(root->left);
        Node* rnode = bToDLL(root->right);
        Node* temp = newNode(0);
        Node* result = temp;
        if(lnode) {
            temp->right = lnode;
            lnode->left = temp;
            temp = temp->right;
            while(temp->right) {
                temp->right->left = temp;
                temp = temp->right;
            }
        }
        temp->right = root;
        root->left = temp;
        temp = temp->right;
        if(rnode) {
            temp->right = rnode;
            rnode->left = temp;
            temp = temp->right;
            while(temp->right) {
                temp->right->left = temp;
                temp = temp->right;
            }
        }
        result->right->left = NULL;
        return result->right;
    }
};
