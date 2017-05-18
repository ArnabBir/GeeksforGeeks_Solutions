/* Link list Node 
struct Node {
    int data;
    Node* next;
}; */

/* Should return data of middle node. If linked list is empty, then  -1*/
int getMiddle(Node *head)
{
    bool even = false;
    if(head == NULL)    return -1;
    if(head->next == NULL){
        return head->data;
    }
    //cout<<head->next->data<<endl;
    
    struct Node * mid = new Node;
    struct Node * tail = new Node;
    mid = head;
    tail = head;
    //cout<<mid->data<<endl;
    //cout<<tail->data<<endl;
    //cout<<(tail->next->next != NULL)<<endl;
    while(tail->next != NULL){
        tail = tail->next;
        if(tail->next != NULL){
            //cout<<tail->next->next->data<<endl;
            tail = tail->next;
            mid = mid->next;
        }
        else{
            even = true;
            break;
        }    
    }
        if(even)    return mid->next->data;
    else    return mid->data;

}
