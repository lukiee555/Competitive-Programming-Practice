// Recursion
// int knapsack(vector<int> &A, vector<int> B, int C, int N){
//     if(N == 0 || C == 0)
//         return 0;
//     if(B[N - 1] <= C){
//         return max((A[N-1] + knapsack(A, B, C - B[N - 1], N - 1)), knapsack(A, B, C, N-1));
//     }else if(B[N - 1] > C){
//         return knapsack(A, B, C, N-1);
//     }

// }
// int Solution::solve(vector<int> &A, vector<int> &B, int C) {
//     int N = A.size();
//     return knapsack(A, B, C, N);
// }
// Memoization
// int knapsack(vector<int>& wt, vector<int>& val, int W, int n, vector<vector<int>>& dp)
// {
//     if(n == 0 || W == 0)
//         return 0;
//     if(dp[n][W] != -1)
//         return dp[n][W];
    
//     if(wt[n-1] <= W)
//     return dp[n][W] = max(val[n-1] + knapsack(wt, val, W-wt[n-1], n-1, dp), knapsack(wt, val, W, n-1, dp));
//     else
//     return dp[n][W] = knapsack(wt, val, W, n-1, dp);
// }

// int Solution::solve(vector<int> &val, vector<int> &wt, int W) 
// {
//     int n = wt.size();
//     vector<vector<int>> dp(n+1 , vector<int> (W+1, -1));
//     return knapsack(wt, val, W, n, dp);
// }
// Top-Down DP
int Solution::solve(vector<int> &a, vector<int> &b, int c) {
    vector<vector<int>> dp(a.size()+1,vector<int>(c+1, 0));
    for(int i=1; i<=a.size(); i++)
    {
        for(int j=1; j<=c; j++)
        {
            int x = 0;
            if(b[i-1] <= j) 
                x = dp[i-1][j-b[i-1]]+a[i-1];
            dp[i][j] = max(x,dp[i-1][j]);
        }
    }
    return dp[a.size()][c];
}