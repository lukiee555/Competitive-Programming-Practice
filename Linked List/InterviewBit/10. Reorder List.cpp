/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 * 
 * typedef struct ListNode listnode;
 * 
 * listnode* listnode_new(int val) {
 *     listnode* node = (listnode *) malloc(sizeof(listnode));
 *     node->val = val;
 *     node->next = NULL;
 *     return node;
 * }
 */
/**
 * @input A : Head pointer of linked list 
 * 
 * @Output head pointer of list.
 */
listnode* reorderList(listnode* A) {
    if(!A || !A->next)
        return A;
        
    //find middle: O(n)
    listnode *slw = A, *fst = A;
    while(fst->next && fst->next->next)
    {
        slw = slw->next;
        fst = fst->next->next;
    }

    // cut from the middle and reverse the second half: O(n)
    listnode *mid = slw, *preCurr = slw->next;
    while(preCurr->next)
    {
        listnode *curr = preCurr->next;
        preCurr->next = curr->next;
        curr->next = mid->next;
        mid->next = curr;
    }

    // merge two lists: O(n)
    listnode *p1 = A, *p2 = mid->next;
    while(p1 != mid)
    {
        mid->next = p2->next;
        p2->next = p1->next;
        p1->next = p2;
        p1 = p2->next;
        p2 = mid->next;
    }

    return A;
}
