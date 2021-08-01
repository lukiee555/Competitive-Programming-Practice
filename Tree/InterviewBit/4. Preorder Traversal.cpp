/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::preorderTraversal(TreeNode* A) {
    vector<int> ans;
    stack<TreeNode*> stack;
    if(A == NULL)
        return ans;
    stack.push(A);
    while(!stack.empty()){
        TreeNode* node = stack.top();
        ans.emplace_back(node->val);
        stack.pop();
        if(node->right)
            stack.push(node->right);
        if(node->left)
            stack.push(node->left);
    }
    return ans;
}
