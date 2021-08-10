class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if(!root)
            return ans;
        queue<TreeNode*> q;
        q.push(root);
        //int level = 0;
        int count = 0;
        
        while(!q.empty()){
            count = q.size();
            for(int i = 0; i < count; i++){
                TreeNode* node = q.front();
                q.pop();
                if(i == count - 1)
                    ans.push_back(node->val);
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
            }
        }
        return ans;
    }
};