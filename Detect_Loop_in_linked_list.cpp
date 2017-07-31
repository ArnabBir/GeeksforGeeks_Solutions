int detectloop(Node *list)
{
   Node * pt1 = list;
   Node * pt2 = list;
   while(pt2 != NULL && pt2->next != NULL && pt1 != NULL){
       pt1 = pt1->next;
       pt2 = pt2->next->next;
       if(pt1 == pt2){
           return true;
       }
   }
   return false;
}
