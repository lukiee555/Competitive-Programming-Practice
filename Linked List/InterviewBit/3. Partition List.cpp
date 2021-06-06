ListNode* Solution::partition(ListNode* A, int B) {
    ListNode* lessD = new ListNode(0);
    ListNode* greaterD = new ListNode(0);
    ListNode* less = lessD;
    ListNode* greater = greaterD;
    ListNode* temp = A;
    while(temp != NULL){
        if(temp->val < B){
            less->next = temp;
            less = less->next;
            temp = temp->next;
        }else{
            greater->next = temp;
            greater = greater->next;
            temp = temp->next;
        }
    }
    less->next = (greaterD->next) ? (greaterD->next) : NULL;
    greater->next = NULL;
    A = lessD->next;
    return A;
}