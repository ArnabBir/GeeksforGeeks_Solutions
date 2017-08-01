Node * merge(Node * a, Node * b){
    if(a == NULL)   return b;
    if(b == NULL)   return a;
    Node * mergedLL = new Node;
    if(a->data < b->data){
        mergedLL = a;
        mergedLL->bottom = merge(a->bottom, b);
    }
    else{
        mergedLL = b;
        mergedLL->bottom = merge(a, b->bottom);
    }
    return mergedLL;
}

Node *flatten(Node *root)
{
   if(root == NULL || root->next == NULL) return root;
   return merge(root, flatten(root->next));
}
