/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL) return head;
        else if(head->next == NULL) return head;
        
        ListNode *i = head, *j = head->next, *temp;
        while(i != NULL && j != NULL)
        {
            if(i->val == j->val)
                temp = j, j = j->next, i->next = j, delete(temp);
            else
            {
                i = j;
                j = j->next;
            }   
        }
        
        return head;
    }
};