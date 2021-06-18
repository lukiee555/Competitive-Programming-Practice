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
 * @input B : Head pointer of linked list 
 * 
 * @Output head pointer of list.
 */
listnode* addTwoNumbers(listnode* A, listnode* B) {
    int c = 0; 
    listnode* res =  listnode_new(0);
    listnode* head = res;
    while(A || B || c){
        int sum = (A ? A->val : 0) + (B ? B->val : 0) + c;
        c = floor(sum/10);
        head->next =  listnode_new(sum%10);
        A = A ? A->next : NULL;
        B = B ? B->next : NULL;
        head = head->next;
        }
    return res->next;
}
