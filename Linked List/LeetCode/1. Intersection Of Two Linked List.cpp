/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lA = 0;
        int lB = 0;
        ListNode *tempA = headA;
        ListNode *tempB = headB;
        while(tempA){
            lA++;
            tempA = tempA->next;
        }
            
        while(tempB){
            tempB = tempB->next;
            lB++;
        }
        int d = abs(lA - lB);
        tempA = headA;
        tempB = headB;
        if(lA > lB){
            while(d--){
                tempA = tempA->next;
            }
        }else{
            while(d--){
                tempB = tempB->next;
            }
        }
        
        while(tempA && tempB){
            if(tempA == tempB)
                return tempA;
            tempA = tempA->next;
            tempB = tempB->next;
        }
        return NULL;
    }
};