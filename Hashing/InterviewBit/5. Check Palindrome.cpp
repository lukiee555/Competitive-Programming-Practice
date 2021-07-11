int Solution::solve(string A) {
    int n = A.size();
    vector<int> freq(26, 0);
    for(int i = 0; i < n; i++) freq[A[i] - 'a']++;
    int odd = 0;
    for(int i = 0; i < 26; i++){
        if(freq[i] % 2 != 0) odd++;
    }
    if(odd > 1) return 0;
    return 1;
}