/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node {
    int data;
    Node* left, * right;
}; */
/* Should return true if tree represented by root is BST. 
   For example, return  value should be 1 for following tree.
         20
     /      \ 
   10       30
  and return value should be 0 for following tree.
         10
     /      \ 
   20       30 */
   
bool checkBST(Node * root, int minVal, int maxVal){
    if(root == NULL)    return true;
    if(root->data > maxVal || root->data < minVal)   return false;
    return checkBST(root->left, minVal, root->data-1) * checkBST(root->right, root->data+1, maxVal);
}
        
bool isBST(Node* root) {
    return checkBST(root, INT_MIN, INT_MAX);
}
