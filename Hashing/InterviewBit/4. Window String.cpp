string Solution::minWindow(string S, string T) {
    vector<int> table(128, 0);
    for(auto c: T)
        table[c]++;
    
    int left = 0;
    int right = 0;
    int count = T.size();
    int startMin = 0;
    int min = INT_MAX;

    while(right < S.size()){
        if(table[S[right]] > 0) 
            count--;
        
        table[S[right]]--;
        right++;
        while(count == 0){
            if(right - left < min){
                startMin = left;
                min = right - left;
            }
            table[S[left]]++;
            if(table[S[left]] > 0)
                count++;
            left++;
        }
    }
    if(min == INT_MAX)
        return "";
    return S.substr(startMin, min);                                              
}