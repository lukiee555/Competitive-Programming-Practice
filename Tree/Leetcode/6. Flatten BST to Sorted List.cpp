void inOrder(TreeNode* curr, TreeNode* &prev){
    if(curr == NULL)
        return;
    inOrder(curr->left, prev);
    prev->left = NULL;
    prev->right = curr;
    prev = curr;
    inOrder(curr->right, prev);
}

TreeNode* flatten(TreeNode* root){
    TreeNode* dummy = new TreeNode(-1);
    TreeNode* prev = dummuy;
    inOrder(root, prev);

    prev->left = NULL;
    prev->right = NULL;
    return dummy->right;
}