Node* SortedMerge(Node* head1,   Node* head2)
{
    Node * mergedLL = new Node;
    mergedLL->next = NULL;
    Node * copyLL = mergedLL;
    while(head1 != NULL && head2 != NULL){
        if(head1->data < head2->data){
            copyLL->data = head1->data;
            copyLL->next = new Node;
            copyLL = copyLL->next;
            head1 = head1->next;
        }
        else{
            copyLL->data = head2->data;
            copyLL->next = new Node;
            copyLL = copyLL->next;
            head2 = head2->next;
        }
    }
    if(head1 != NULL){    copyLL->data = head1->data; copyLL->next = head1->next;}
    if(head2 != NULL){    copyLL->data = head2->data; copyLL->next = head2->next;}
    return mergedLL;
}
