/* Link list Node 
struct Node {
    int data;
    Node* next;
}; */


/* Should return true if linked list is circular, else false */
bool isCircular(Node *head)
{
   struct Node * first = head;
   struct Node * second = head;
   while(first != NULL && second != NULL && first->next != NULL){
       first = first->next->next;
       second = second->next;
       if(first == second)  return true;
   } 
   return false;
}
