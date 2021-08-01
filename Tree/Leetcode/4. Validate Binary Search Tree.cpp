//Recursion TC = O(n) Another way of doing it Top Down Approach
class Solution {
public:
    bool isValidBST(TreeNode* root) {
    return isValidBST(root, NULL, NULL);
    }

    bool isValidBST(TreeNode* root, TreeNode* minNode, TreeNode* maxNode) {
        if(!root) return true;
        if(minNode && root->val <= minNode->val || maxNode && root->val >= maxNode->val)
            return false;
        return isValidBST(root->left, minNode, root) && isValidBST(root->right, root, maxNode);
    }
};

//Recursive TC = O(n) 100ms Solution
class isBSTReturn{
    public:
    bool isBST;
    long minimum;
    long maximum;
};
class Solution {
public:
    isBSTReturn isValidBSTHelper(TreeNode* root){
        if(root == NULL){
            isBSTReturn out;
            out.isBST = true;
            out.minimum = LONG_MAX;
            out.maximum = LONG_MIN;
            return out;
        }
        isBSTReturn  leftOut = isValidBSTHelper(root->left);
        isBSTReturn  rightOut = isValidBSTHelper(root->right);
        
        isBSTReturn out;
        out.minimum = min((long)root->val, min(leftOut.minimum, rightOut.minimum));
        out.maximum = max((long)root->val, max(leftOut.maximum, rightOut.maximum));
        out.isBST = (((long)root->val > leftOut.maximum) && ((long)root->val < rightOut.minimum) &&
                    leftOut.isBST && rightOut.isBST);
        return out;
        
    }
    bool isValidBST(TreeNode* root) {
        return isValidBSTHelper(root).isBST;
    }
};
//Recursive TC = O(nh)
// class Solution {
// public:
//     long maxTree(TreeNode* root){
//         if(root == NULL)
//             return LONG_MIN;
//         return max((long)root->val, max(maxTree(root->left), maxTree(root->right)));
//     }
//     long minTree(TreeNode* root){
//         if(root == NULL)
//             return LONG_MAX;
//         return min((long)root->val, min(minTree(root->left), minTree(root->right)));
//     }
//     bool isValidBST(TreeNode* root) {
//         if(root == NULL)
//             return true;
//         long leftMax = maxTree(root->left);
//         long rightMin = minTree(root->right);
//         return ((long)root->val > leftMax && (long)root->val < rightMin && isValidBST(root->left) && isValidBST(root->right));
//     }
// };