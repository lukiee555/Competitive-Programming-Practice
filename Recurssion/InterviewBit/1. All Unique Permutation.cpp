void permutation(vector<int> &A, int l, vector<vector<int> > &res){
    
    if(l==A.size()){
        res.push_back(A);
        return;
    }
    unordered_set<int> val;
    for(int i=l;i<A.size();i++){
        if(val.find(A[i]) != val.end())
            continue;
        val.insert(A[i]);
        swap(A[l], A[i]);
        permutation(A, l+1, res);
        swap(A[l], A[i]);
    }
    
}

vector<vector<int> > Solution::permute(vector<int> &A) {
    int l=0;
    vector<vector<int> > res;
    permutation(A, l, res);
    return res;
}