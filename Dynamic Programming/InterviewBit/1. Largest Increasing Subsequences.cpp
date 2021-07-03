int Solution::lis(const vector<int> &A) {
    int n = A.size();
    //As eaqch element will be size of 1 for the length to be considered
    vector<int> dp(n,1);
    int ans = 1;
    for(int i = 1; i < n; i++){
        for(int j = 0; j < i; j++){
            if(A[j] < A[i]){
                dp[i] = max(dp[i], 1 + dp[j]);
            }
        }
        ans = max(ans, dp[i]);
    }
    return ans;
}
