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
       int lenA = getLen(headA);
        int lenB = getLen(headB);
        if(lenA > lenB)
        {
            int diff = lenA - lenB;
            headA = move(headA, diff);
        }
        else if(lenA < lenB)
        {
            int diff = lenB - lenA;
            headB = move(headB, diff);
        }

        while(headA && headB)
        {
            if(headA == headB)
                return headA;

            headA = headA->next;
            headB = headB->next;
        }
        return NULL; 
    }
    int getLen(ListNode *head) {
        ListNode* temp = head;
        int counts = 0;
        while(temp)
        {
            counts++;
            temp = temp->next;
        }

        return counts;
    }

    ListNode* move(ListNode *node, int moveCount) {
        while(moveCount-- && node)
        {
            node = node->next;
        }
        return node;
    }

};