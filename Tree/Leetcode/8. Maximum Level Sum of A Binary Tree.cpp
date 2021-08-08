/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        int level = 0, count = 0;
        int maxSum = INT_MIN;
        int currSum = 0;
        int maxLevel = 0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            level++;
            count = q.size();
            currSum = 0;
            while(count--){
                TreeNode* temp = q.front();
                q.pop();
                currSum += temp->val;
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
            }
            if(currSum > maxSum ){
                maxLevel = level;
                maxSum = currSum;
            }
                
        }
        return maxLevel;
    }
};