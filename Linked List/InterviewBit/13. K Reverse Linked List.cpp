/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/* Recursive Solution 
ListNode *Solution::reverseList(ListNode *head, int B)
{

    if (B == 1)
        return head;

    ListNode *prev = NULL;
    ListNode *curr = head;
    ListNode *next;

    int count = 0;

    while (curr != NULL and count < B)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;

        count++;
    }

    if (next != NULL)
        head->next = reverseList(next, B);

    return prev;
}
*/
ListNode *Solution::reverseList(ListNode *A, int B)
{
    ListNode *cur = A, *head = NULL, *lst = A;
    while (cur)
    {
        ListNode *prev = NULL, *next = NULL, *cur_lst = cur;
        for (int i = 0; i < B; i++)
        {
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        if (!head)
            head = prev;
        else
            lst->next = prev;
        lst = cur_lst;
    }
    return head;
}
