/*The Node structure is
struct Node {
int data;
Node * right, * left;
};*/

/*You are required to complete below method */

void diffVal(Node * root, int k, int &diff, int &diff_key_val){
    if(root->data == k){
        diff_key_val = root->data;
        diff = 0;
        return;
    }
    if(root->data > k){
        //cout<<"hello1"<<" "<<root->data<<endl;
        if(diff > (root->data - k)){
           diff = root->data - k;
           diff_key_val = root->data;
        } 
        if(root->left != NULL)
            diffVal(root->left, k, diff, diff_key_val);
        else return;
    }
    if(root->data < k){
        //cout<<"hello1"<<" "<<root->data<<endl;
        if(diff > (k - root->data)){
           diff = k - root->data;
           diff_key_val = root->data;
        } 
        if(root->right != NULL)
            diffVal(root->right, k, diff, diff_key_val);
        else return;
    }
}

int maxDiff(Node *root, int k)
{
    int diff = INT_MAX;
    int diff_key_val = root->data;
    diffVal(root, k, diff, diff_key_val);
    return diff_key_val;
}
