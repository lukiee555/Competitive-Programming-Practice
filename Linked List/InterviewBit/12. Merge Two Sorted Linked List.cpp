// Solution - 1 Recursive
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
//     ListNode* result = NULL;
//     if( A == NULL)
//         return B;
//     if( B == NULL)
//         return A;
//     if(A->val <= B->val){
//         result = A;
//         result->next = mergeTwoLists(A->next, B);
//     }else{
//         result = B;
//         result->next = mergeTwoLists(A, B->next);
//     }
//     return result;
// }
// Solution - 2 Iterative
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    // ListNode* result = NULL;
    // if( A == NULL)
    //     return B;
    // if( B == NULL)
    //     return A;
    // if(A->val <= B->val){
    //     result = A;
    //     result->next = mergeTwoLists(A->next, B);
    // }else{
    //     result = B;
    //     result->next = mergeTwoLists(A, B->next);
    // }
    // return result;

    ListNode* result = (struct ListNode*)(malloc(sizeof(struct ListNode)));
    result->next = NULL;
    ListNode* temp = result;
    temp = result;
    while(A!=NULL && B!=NULL){
        if(A->val <= B->val){
            temp->next = A;
            temp = temp->next;
            A = A->next;
        }else{
            temp->next = B;
            temp = temp->next;
            B = B->next;
        }
    }
    if(A!=NULL){
        temp->next = A;
    }else{
        temp->next = B;
    }
    temp = result->next;
    return temp;
}

