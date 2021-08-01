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
//Method - 2 Optimized Approach
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
    pair<int, int> diameterHelper(TreeNode* root){
        if(root == NULL)
            return make_pair(0,0);
        pair<int, int> leftAns = diameterHelper(root->left);
        pair<int, int> rightAns = diameterHelper(root->right);
        int lh = leftAns.first, ld = leftAns.second;
        int rh = rightAns.first, rd = rightAns.second;
        int height = 1 + max(lh, rh);
        int diameter = max(lh + rh, max(rd, ld));
        return make_pair(height, diameter);
        
    }
    int diameterOfBinaryTree(TreeNode* root) {
        return diameterHelper(root).second;
    }
};
//Method - 1
// class Solution {
// public:
//     //TC = O(n)
//     int height(TreeNode* root){
//         if(root == NULL)
//             return 0;
//         int lh = height(root->left);
//         int rh = height(root->right);
//         return 1 + max(lh, rh);
//     }
//     //TC = O(n^2) for skewed tree and O(nlogn) for normal binary tree
//     //Better way to answer is TC = (n*h) where h is the height of the binary tree
//     int diameterHelper(TreeNode* root){
//         if(root == NULL)
//             return 0;
//         int option1 = height(root->left) + height(root->right);
//         int option2 = diameterHelper(root->left);
//         int option3 = diameterHelper(root->right);
        
//         return max(option1, max(option2, option3));
//     }
//     int diameterOfBinaryTree(TreeNode* root) {
//         return diameterHelper(root);
//     }
// };