/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::solve(ListNode* A, int B) {
    ListNode* end = A;
    ListNode* ans = NULL;
    int count = 0;
    while(end && end->next){
        end = end->next->next;
        count++;
        if(count == B)
            ans = A;
        else if (count > B)
            ans = ans->next;
    }
    if(ans == NULL)
        return -1;
    else
        return ans->val;
}
