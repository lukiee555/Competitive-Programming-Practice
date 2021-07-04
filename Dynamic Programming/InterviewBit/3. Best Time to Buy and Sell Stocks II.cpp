int Solution::maxProfit(const vector<int> &A) {
    //Solutiom - 1 Brute Force O(N^N)
    
    //Solution - 2 DP O(N^2)
    // int n = A.size();
    // if(n == 0 || n == 1)
    //     return 1;
    // vector<int> dp(n,0);
    // for(int i = 1; i < n; i++){
    //     //if not selling on that day
    //     dp[i] = dp[i - 1];
    //     for(int j = 0; j < i ; j++){
    //         dp[i] = max(dp[i], dp[j] + (A[i] - A[j]));
    //     }
    // }
    // return dp[n-1];
    //Solution-3 Using Extra Variable to store Maximum till now so that we can remove Second loop
    int n = A.size();
    if(n == 0 || n == 1)
        return 0;
    vector<int> dp(n,0);
    int maxi = dp[0] - A[0];
    for(int i = 1; i < n; i++){
        //if not selling on that day
        dp[i] = dp[i - 1];
        dp[i] = max(dp[i], A[i] + maxi);
        maxi = max(maxi, dp[i] - A[i]);
    }
    return dp[n-1];
    //Solution
    // vector<int> temp(A.size(), 0);
    
    // int buy = A[0], flag = 0, i = 1, max_sell = INT_MIN;
    // int sol = 0;
    // while(i < A.size()){
    //     int diff = A[i] - A[i-1];
    //     if(diff > 0){
    //         sol = sol + diff;
    //     }
    //     i++;
    // }
    
    // return sol;
}
