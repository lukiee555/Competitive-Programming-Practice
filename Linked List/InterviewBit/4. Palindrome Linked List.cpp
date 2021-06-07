int Solution::lPalin(ListNode* A) {
    if (!A || !A->next)
        return 1;
    stack<int> s;
    ListNode* slow = A, *fast = A;
    while (fast && fast->next)
    {
        s.push(slow->val);
        slow = slow->next;
        fast = fast->next->next;
    }
    
    if (fast)
        slow = slow->next;
    
    while (s.size() && slow)
    {
        if (s.top() != slow->val)
            return 0;
        s.pop();
        slow = slow->next;
    }
    return 1;
}

int Solution::lPalin(ListNode* A) {
    ListNode* slow = A;
    ListNode* fast = A;
    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    ListNode* prev = NULL;
    ListNode* cur = slow;
    ListNode* next;
    while(cur != NULL){
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    slow = prev;
    fast = A;
    while(slow){
        if(fast->val != slow->val)
            return 0;
        fast = fast->next;
        slow = slow->next;
    }
    return 1;
}