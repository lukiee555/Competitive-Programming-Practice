int Solution::singleNumber(const vector<int> &A) {
    int ans = 0;
    for(auto i = 0; i < 32; ++i){
        int sum = 0;
        for(auto j = 0; j < A.size(); ++j){
            if((A[j] >> i) & 1 == 1){
                ++sum;
                sum%=3;
            }
        }
        if(sum!=0)
            ans |= sum << i;
    }
    return ans;
}
