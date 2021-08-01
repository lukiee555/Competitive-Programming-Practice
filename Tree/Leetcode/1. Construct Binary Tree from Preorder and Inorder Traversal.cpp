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
    TreeNode* buildTreeHelper(vector<int>& p, vector<int>& i, int ps, int pe, int is, int ie){
        if(is > ie)
            return NULL;
        TreeNode* root = new TreeNode(p[ps]);
        int rootIdxInInorder = -1;
        for(int j = is; j <= ie; j++)
            if(i[j] == p[ps]){
                rootIdxInInorder = j;
                break;
            }
                
        int lps, lpe, lis, lie;
        lis = is;
        lie = rootIdxInInorder - 1;
        lps = ps + 1;
        lpe = lie - lis + lps;
        int rps, rpe, ris, rie;
        rps = lpe + 1;
        rpe = pe;
        ris = rootIdxInInorder + 1;
        rie = ie;
        
        root->left = buildTreeHelper(p, i, lps, lpe, lis, lie);
        root->right = buildTreeHelper(p, i, rps, rpe, ris, rie);
        return root;
    }
    TreeNode* buildTree(vector<int>& p, vector<int>& i) {
        return buildTreeHelper(p, i, 0, p.size() - 1,0,i.size() - 1 );
    }
};