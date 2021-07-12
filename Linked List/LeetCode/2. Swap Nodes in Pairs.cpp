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
    ListNode* swapPairs(ListNode* head) {
        ListNode* newHead = new ListNode(0);
        newHead->next = head;
        ListNode* prev = newHead;
        ListNode* current, *forward, *temp;
        while(prev->next != NULL && prev->next->next != NULL){
            current = prev->next;
            forward = current->next;
            temp = forward->next;
            
            prev->next = forward;
            forward->next = current;
            current->next = temp;
            
            prev = current;
            
        }
        return newHead->next;
    }
};