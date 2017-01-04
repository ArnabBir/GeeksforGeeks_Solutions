#include<bits/stdc++.h>

using namespace std;

struct Node {
int data;
struct Node * right, * left;
};



void insert(Node ** tree, int val)
{
    Node *temp = NULL;
    if(!(*tree))
    {
        temp = (Node *)malloc(sizeof(Node));
        temp->left = temp->right = NULL;
        temp->data = val;
        *tree = temp;
        return;
    }

    if(val < (*tree)->data)
    {
        insert(&(*tree)->left, val);
    }
    else if(val > (*tree)->data)
    {
        insert(&(*tree)->right, val);
    }

}




int getCountOfNode(Node *root, int l, int h)
{

    if (!root) return 0;


    if (root->data == h && root->data == l)
        return 1;

    if (root->data <= h && root->data >= l)
         return 1 + getCountOfNode(root->left, l, h) +
                    getCountOfNode(root->right, l, h);

    else if (root->data < l)
         return getCountOfNode(root->right, l, h);


    else return getCountOfNode(root->left, l, h);
}


bool isDeadEnd(Node *root);
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        Node *root;
        Node *tmp;
    //int i;

        root = NULL;

        int N;
        cin>>N;
        for(int i=0;i<N;i++)
        {
            int k;
            cin>>k;
            insert(&root, k);

        }


     cout<<isDeadEnd(root);
     cout<<endl;
    }
}

bool N[201] = {false};


bool isDeadEnd(Node * root)
{
    bool result = false;
    N[root->data] = true;

    if(root->left != NULL){
        result = isDeadEnd(root->left);
    }

    if(!result && root->right != NULL){
        result = isDeadEnd(root->right);
    }

    if(!result && root->left == NULL && root->right == NULL){
        if(root->data == 1){
            if(N[2] == true){
                result = true;
            }
        }
        else if(N[root->data - 1] == true && N[root->data + 1] == true){
            result = true;
        }
    }

    return result;
}
