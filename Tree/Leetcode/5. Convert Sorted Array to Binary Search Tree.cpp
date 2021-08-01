class Solution {
public:
    TreeNode* sortedArrayToBSTHelper(vector<int> a, int sIdx, int eIdx){
        if(sIdx > eIdx)
            return NULL;
        int mid = (sIdx + eIdx) / 2;
        
        TreeNode* root = new TreeNode(a[mid]);
        root->left = sortedArrayToBSTHelper(a, sIdx, mid - 1);
        root->right = sortedArrayToBSTHelper(a, mid + 1, eIdx);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return sortedArrayToBSTHelper(nums, 0, nums.size() - 1);
    }
};