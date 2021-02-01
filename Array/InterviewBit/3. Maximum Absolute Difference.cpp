int Solution::maxArr(vector<int> &nums) {
    int mx1 = INT_MIN, mn1 = INT_MAX, mx2 = INT_MIN, mn2 = INT_MAX;
    for(int i = 0; i < nums.size(); ++i){
        // for eq 1
        mx1 = max(mx1, nums[i]+i);
        mn1 = min(mn1, nums[i]+i);
        
        // for eq2
        mx2 = max(mx2, nums[i]-i);
        mn2 = min(mn2, nums[i]-i);
    }
    int ans1 = mx1 - mn1;
    int ans2 = mx2 - mn2;
    return max(ans1, ans2);
}
