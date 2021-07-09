vector<int> Solution::solve(vector<int> &A) {
    unordered_map<int,int> mp;
    vector<int> ans;
    int idx = 0;
    for(auto i : A){
        if(mp.find(i) != mp.end()){
            ans[mp[i]]++;

            if(mp.find(i+1)==mp.end())
                mp[i+1] = mp[i];

            else
                mp[i+1]=min(mp[i], mp[i+1]);
        }
    
        mp[i]=idx++;
        ans.push_back(i);
    }
    return ans;
}
