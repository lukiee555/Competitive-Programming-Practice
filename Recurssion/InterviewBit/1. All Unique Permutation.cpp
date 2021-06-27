void solve(vector<int> nums, vector<vector<int>> &ans, int idx) {
    if (idx == nums.size()) {
        ans.push_back(nums);
        return ;
    }
    for (int i = idx; i < nums.size(); i++) {
        if(i != idx and nums[i]==nums[idx])
            continue;
        swap(nums[i], nums[idx]);
        solve(nums, ans, idx + 1);
    }
}

vector<vector<int> > Solution::permute(vector<int> &nums) {
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    solve(nums,ans,0);
    return ans;
}
// void permutation(vector<int> &A, int l, vector<vector<int> > &res){
    
//     if(l==A.size()){
//         res.push_back(A);
//         return;
//     }
//     unordered_set<int> val;
//     for(int i=l;i<A.size();i++){
//         if(val.find(A[i]) != val.end())
//             continue;
//         val.insert(A[i]);
//         swap(A[l], A[i]);
//         permutation(A, l+1, res);
//         swap(A[l], A[i]);
//     }
    
// }

// vector<vector<int> > Solution::permute(vector<int> &A) {
//     int l=0;
//     vector<vector<int> > res;
//     permutation(A, l, res);
//     return res;
// }