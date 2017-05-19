/* Linked List Node structure
   struct Node  {
     int data;
     Node *next;
  }
*/

// Should reverse list and return new head.
Node* reverse(Node *head)
{
  Node * curr, * prev, * next;
  curr = head;
  prev = NULL;
  
  while(curr != NULL){
      next = curr->next;
      curr->next = prev;
      prev = curr;
      curr = next;
  }
  return prev;
}
