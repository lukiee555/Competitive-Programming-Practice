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
    int rangeSumBST(TreeNode* root, int L, int R) {
        int sum = 0;
        if(root == NULL)
            return sum;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode* front = q.front();
            q.pop();
            if(front->val <= R && front->val >= L)
                sum+= front->val;
            if(front->left != NULL && front->val > L)
                q.push(front->left);
            if(front->right != NULL && front->val < R)
                q.push(front->right);
        }
        return sum;
        
    }
};
/*
Using Recursion
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
 /*
class Solution {
public:
    int rangeSumBST(TreeNode* root, int L, int R) {
        int sum = 0;
        if(root == NULL)
            return sum;
        if(root->val > R)
            return rangeSumBST(root->left, L, R);
        if(root->val < L)
            return rangeSumBST(root->right, L, R);
        sum += root->val + rangeSumBST(root->left, L, R) + rangeSumBST(root->right, L, R);
        return sum;
    }
};
*/