int modularNode(Node* head, int k)
{
	Node * ll1 = head;
	Node * ll2 = head;
	int count = 0, len = 0;
	while(ll1 != NULL){
	    ++len;
	    count = len % k;
	    if(count == 0){
	        ll2 = ll1;
	    }
	    ll1 = ll1->next;
	}
	if(len < k)   return -1;
	return ll2->data;
}
