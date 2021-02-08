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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head) 
            return NULL;
        int len = 1;
        ListNode *p = head;
        while (p->next) {
            ++len;
            p = p->next;
        }
        p->next = head;
        k = len - k % len;
        
        while (k--) 
            p = p->next;
        
        head = p->next;
        p->next = NULL;
        return head;
    }
};