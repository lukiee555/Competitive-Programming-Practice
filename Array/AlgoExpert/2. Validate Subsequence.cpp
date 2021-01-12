class Solution {
public:
    bool isSubsequence(string s, string t) {
        int start = 0;
        if (s.length() > t.length()) return false;
        for(auto& c : t){
            if (s.length() > start){
                start += (s[start] == c) ? 1 : 0;
                
            } else break;
        }
        
        return (s.length() > start) ? false : true;
    }
};