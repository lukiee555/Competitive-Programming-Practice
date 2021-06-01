int Solution::repeatedNumber(const vector<int> &A) {
    // if(A.size() <= 1)
    //     return -1;
    // for(int i = 0; i < A.size(); i++){
    //     if(A[abs(A[i])] > 0)
    //         A[abs(A[i])] = -A[abs(A[i])];
    //     else
    //         return abs(A[i]);
    // }
    // return -1;
    int slow = A[0];
    int fast = A[0];
    do {
        slow = A[slow];
        fast = A[A[fast]];
    }
    while(slow != fast);

    slow = A[0];
    while(slow != fast) {
        slow = A[slow];
        fast = A[fast];
    }
    
    return slow;
}
