class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
       unordered_set<int> seen;
        for(int i = 0; i < arr.size(); i++) {
            if(seen.count(arr[i]) > 0 || seen.count(arr[i]*4) > 0) {
                return true;
            } else {
                seen.insert(arr[i]*2);
            }
        }
        return false; 
    }
};