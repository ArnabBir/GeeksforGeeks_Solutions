map<int, long> mp;

void calculateSum(Node *itr, int x) {
    if(!itr)    return;
    mp[x] += itr->data;
    calculateSum(itr->left, x-1);
    calculateSum(itr->right, x+1);
}

void printVertical(Node *root) {
    if(!root)   return;
    Node * itr = root;
    calculateSum(itr, 0);
    for(auto & i : mp) {
        cout<<i.second<<" ";
    }
    mp.clear();
}
