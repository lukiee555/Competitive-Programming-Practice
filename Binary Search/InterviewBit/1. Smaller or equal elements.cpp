int Solution::solve(vector<int> &A, int B) {
    int start = 0, end = A.size(), mid = 0;
    
    while(start <= end) {
        mid = (start + end) / 2;
        if(A[mid] <= B) start = mid + 1;
        else end = mid - 1;
    }
    
    return min((int)A.size(), mid + (A[mid] <= B));
}