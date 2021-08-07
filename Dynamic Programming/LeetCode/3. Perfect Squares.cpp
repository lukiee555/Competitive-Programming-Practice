// DP Tabulation
class Solution {
public:
    
    int numSquares(int n) {
        int dp[n+1];
        dp[0] = 0;
        for(int i = 1; i <= n; i++){
            dp[i] = i;
            for(int j = 1; j <= sqrt(i); j++){
                int sq = j*j;
                dp[i] = min(dp[i], 1 + dp[i - sq]);
            }
        }
        return dp[n];
    }
};
//Method-2 Recursion + Memoisation
// class Solution {
// public:
//     vector<int> dp;
//     int helper(int n){
//         if(n<=3)
//             return n;
//         if(dp[n] != -1)
//             return dp[n];
//         int ans = n;
//         for(int i = 1; i*i <= n; i++){
//             ans = min(ans, 1+helper(n - (i*i)));
//         }
//         dp[n] = ans;
//         return dp[n];
//     }
//     int numSquares(int n) {
//         dp.resize(n+1, -1);
//         return helper(n);
//     }
// };
//Method - 1 Brute Force
// class Solution {
// public:
//     int numSquares(int n) {
//         if(n == 0)
//             return 0;
//         int ans = INT_MAX;
//         for(int i = 1; i <= sqrt(n); i++){
//             int temp = 1 + numSquares(n-(i*i));
//             ans = min(ans, temp);
//         }
//         return ans;
//     }
// };