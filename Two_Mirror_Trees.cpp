int areMirror(Node* a, Node* b)
{
   if(a == NULL && b == NULL)   return 1;
   if(a == NULL && b != NULL)   return 0;
   if(a != NULL && b == NULL)   return 0;
   if(a->data != b->data)   return 0;
   if(!areMirror(a->left, b->right) || !areMirror(a->right, b->left))    return 0;
   return 1;
}
