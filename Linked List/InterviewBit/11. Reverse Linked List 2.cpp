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
 * @input B : Integer
 * @input C : Integer
 * 
 * @Output head pointer of list.
 */
listnode* reverseBetween(listnode* A, int m, int n) {
    listnode* curr = A;
    listnode* prev;
    listnode* temp;
    listnode* start = NULL;
    listnode* startTemp;
    listnode* end;
    listnode* endTemp;
    
    if(A == NULL){
        return NULL;
    }
    
    int length = 0;
    
    while(length < m){
        length++;
        if(length == m-1){
            start = curr;
        }
        else if(length == m){
            startTemp = curr;
        }
        prev = curr;
        curr = curr->next;
    }
    
    while(length < n){
        temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
        length++;
        if(length == n){
            endTemp = prev;
            end = curr;
            startTemp->next = end;
            if(start != NULL){
                start->next = endTemp;
            }
            else if(start == NULL){
                A = endTemp;
            }
        }
    }
    
    return A;
}
