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
    ListNode* removeElements(ListNode* head, int val) {
       if (!head) return NULL;
        ListNode *h = new ListNode(0);
        h->next = head;
        head = h;
        while (h->next){
            if (h->next->val == val){
                h->next = h->next->next;
            }else{
                h = h->next;
            }
        }
        return head->next; 
    }
};