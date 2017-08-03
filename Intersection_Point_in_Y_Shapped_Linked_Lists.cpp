/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* Link list Node 
struct Node {
    int data;
    struct Node* next;
}; */
/* Should return data of intersection point of two linked
   lists head1 and head2.
   If there is no intersecting point, then return -1. */
int intersectPoint(Node* head1, Node* head2)
{
    int count1 = 0, count2 = 0, diff;
    bool flag;
    if(head1 == NULL || head2 == NULL)  return -1;
    Node * list1 = head1;
    Node * list2 = head2;
    //cout<<"Hello"<<endl;
    while(list1 != NULL){
        ++count1;
        list1 = list1->next;
    }
    while(list2 != NULL){
        ++count2;
        list2 = list2->next;
    }
    
    flag = true;
    cout<<count1<<" "<<count2<<endl;
    if(count1 < count2){
        diff = count2 - count1;
        for(int i = 0; i < diff; ++i)   head2 = head2->next;
        int commonNode = head2->data;
        while(count1--){
            if(head1 == head2){
                head1 = head1->next;
                head2 = head2->next;
            }
            else{
                flag = false;
                break;
            }
        }
        if(flag)    return commonNode;
        else    return -1;
    }
    else{
        diff = count1 - count2;
        for(int i = 0; i < diff; ++i)   head1 = head1->next;
        int commonNode = head1->data;
        while(count2--){
            if(head2 == head1){
                head1 = head1->next;
                head2 = head2->next;
            }
            else{
                flag = false;
                break;
            }
        }
        if(flag)    return commonNode;
        else    return -1;
    }
}
