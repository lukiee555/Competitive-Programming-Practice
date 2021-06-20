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
listnode* detectCycle(listnode* A) {
    if(A == NULL || A->next == NULL){
        return NULL;
    }
    
    listnode* slow = A;
    listnode* fast = A;
    
    while(slow != NULL && fast != NULL){
        slow = slow->next;
        if(fast->next == NULL){
            return NULL;
        }
        else{
            fast = (fast->next)->next;
        }
        if(slow == fast){
            break;
        }
    }
    
    if(slow == NULL || fast == NULL){
        return NULL;
    }
    
    listnode* curr = A;
    while(curr != slow){
        curr = curr->next;
        slow = slow->next;
    }
    
    return curr;
}
