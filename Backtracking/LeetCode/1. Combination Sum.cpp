class Solution {
public:
    void findCombination(int idx, int target, vector<int> &candidates, vector<vector<int>> &ans, vector<int> &indCombination){
        if(idx == candidates.size()){
            if(target == 0){
                ans.push_back(indCombination);
            }
            return;
        }
        //pick the element
        if(candidates[idx] <= target){
            indCombination.push_back(candidates[idx]);
            findCombination(idx, target - candidates[idx], candidates, ans, indCombination);
            indCombination.pop_back();
        }
        findCombination(idx+1, target, candidates, ans, indCombination);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> indCombination;
        findCombination(0, target, candidates, ans, indCombination);
        return ans;
    }
};