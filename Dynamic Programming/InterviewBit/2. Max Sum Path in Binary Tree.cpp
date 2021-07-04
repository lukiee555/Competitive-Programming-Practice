/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int ans = INT_MIN;
int maxPathTillHere(TreeNode *A){
    if(A == NULL)
        return 0;
    int leftPathSum = max(0,maxPathTillHere(A->left));
    int rightPathSum = max(0, maxPathTillHere(A->right));
    
    ans = max(ans, (A->val) + leftPathSum + rightPathSum);

    return (A->val) + max(leftPathSum , rightPathSum);
}
int Solution::maxPathSum(TreeNode* A) {
    ans = INT_MIN;
    maxPathTillHere(A);
    return ans;
}
