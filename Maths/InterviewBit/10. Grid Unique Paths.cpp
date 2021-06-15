int Solution::uniquePaths(int m, int n) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int dp[m][n];
    for(int i=0;i<n;i++)
     dp[0][i]=1;
    for(int i=0;i<m;i++)
     dp[i][0]=1;
    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++)
         dp[i][j]=dp[i-1][j]+dp[i][j-1];
    }
    return dp[m-1][n-1];
}