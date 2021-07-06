#define mod 1000007
int Solution::coinchange2(vector<int> &A, int B) {
    vector<int> dp(B+1, 0);
    int n=A.size();
    dp[0]=1;
    int i,j;
    for(i=0;i<n;i++){
        for(j=A[i];j<=B;j++){
            dp[j]+=dp[j-A[i]];
            dp[j]%=mod;
        }
    }
    return dp[B];
}