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
    ListNode* reverseKGroup(ListNode* A, int B) {
    if(!A || !A->next || B == 1) 
        return A;
    ListNode* curr = A;
    int len = 0;
    while(curr){
        len++;
        curr = curr->next;
    }
    ListNode* pre = nullptr, *next, *newHead;
    ListNode* tail1 = nullptr;
    ListNode* tail2 = A;
    curr = A;
    while(len >= B){
        for(int i = 0; i < B; i++){
            next = curr->next;
            curr->next = pre;
            pre = curr;
            curr = next;
        }
        if(!newHead)
            newHead = pre;
        if(tail1)
            tail1->next = pre;
        tail2->next = curr;
        tail1 = tail2;
        tail2 = curr;
        pre = nullptr;
        len -= B;
    }
    return newHead;
    }
};