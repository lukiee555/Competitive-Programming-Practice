int Solution::solve(vector<int> &A, int B) {
    int i = 0;
    int j = 0;
    int count = 0;
    int ans = 0;
    int n = A.size();
    
    while(j < n){
        if(A[j] == 0){
            count++;
        }
        while(count > B){
            if(A[i++] == 0)
                count--;
        }
        ans = max(ans, j-i+1);
        j++;
    }
    return ans;
}
