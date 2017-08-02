bool isIdentical(Node * T1, Node * T2){
    if(T1 == NULL && T2 == NULL)    return true;
    if(T1 == NULL || T2 == NULL)    return false;
    if(T1->key == T2->key)  return isIdentical(T1->left, T2->left) && isIdentical(T1->right, T2->right);
}

bool isSubtree(Node*  T1 ,Node * T2)
{
    if(T2 == NULL)  return true;
    if(T1 == NULL)  return false;
    if(T1->key == T2->key && isIdentical(T1->left, T2->left) && isIdentical(T1->right, T2->right))  return true;
    return isSubtree(T1->left, T2) || isSubtree(T1->right, T2);
}
