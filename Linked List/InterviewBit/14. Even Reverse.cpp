/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* A) {
    if( A == NULL || A->next == NULL || A->next->next == NULL)
        return A;
    ListNode* odd = A;
    ListNode* even = NULL;

    while(odd && odd->next){
        ListNode* temp = odd->next;
        odd->next = temp->next;

        temp->next = even;
        even = temp;
        odd = odd->next;
    }
    odd = A;
    while(even){
        ListNode* temp = even->next;
        even->next = odd->next;
        odd->next = even;
        odd = odd->next->next;
        even = temp;
    }
    return A;
}
