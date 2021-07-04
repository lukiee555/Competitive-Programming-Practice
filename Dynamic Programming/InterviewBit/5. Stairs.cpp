int Solution::climbStairs(int A) {
    int a = 1;
    int b = 2;
    if( A == 1)
        return a;
    if( A == 2)
        return b;
    int ans = 0;
    for(int i = 3; i <= A; i++){
        ans = a + b;
        a = b;
        b = ans;
    }
    return ans;
    // int dp[n];
    // if(n==0) return 1;
    // dp[0]=1;
    // dp[1]=2;
    // for(int i=2;i<n;i++){
    //     dp[i]=dp[i-1]+dp[i-2];
    // }
    // return dp[n-1];
}
