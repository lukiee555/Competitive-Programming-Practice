/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* A) {
    ListNode *temp = A;
    int z = 0, o = 0;
    while(temp != 0){
        if(temp->val == 0) z++;
        else o++;
        temp = temp->next;
    }
    temp = A;
    while(temp != NULL){
        while(z--){
            temp->val = 0;
            temp = temp->next;
        }
        while(o--){
            temp->val = 1;
            temp = temp->next;
        }
    }
    return A;
}