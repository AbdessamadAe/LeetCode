struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode* head = NULL, *walker;
    int v1, v2, rem, carry=0;
    while(1)
    {
        v1 = (l1==NULL) ? 0 : l1->val;
        v2 = (l2==NULL) ? 0 : l2->val;
        if (l1==NULL && l2==NULL && v1==0 && v2==0 && carry ==0) break;
        struct ListNode* node;
        node = (struct ListNode*)malloc(sizeof(struct ListNode));
        node->val = (v1+v2+carry)%10;
        carry = (v1+v2+carry)>=10 ? 1 : 0;
        node->next = NULL;
        if (head ==  NULL) head = node;
        else{
            walker=head;
            while (walker->next!=NULL) walker = walker->next;
            walker->next=node;
        }
        l1 = (l1==NULL) ? l1 : l1 -> next;
        l2 = (l2==NULL) ? l2 : l2 -> next;
    }
    return head;
}