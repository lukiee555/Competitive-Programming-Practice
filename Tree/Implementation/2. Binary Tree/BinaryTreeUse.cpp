#include <iostream>
#include <queue>
#include "BinaryTreeNode.h"

using namespace std;

BinaryTreeNode<int>* buildTreeLevelWise(){
    int rootData;
    cout<<"Enter root Data "<<endl;
    cin>>rootData;
    if(rootData == -1)
        return NULL;
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);

    queue<BinaryTreeNode<int>*> pendingNode;
    pendingNode.push(root);
    while(pendingNode.size() != 0){
        BinaryTreeNode<int>* front = pendingNode.front();
        pendingNode.pop();
        cout<<"Enter left child data of "<<front->data<<endl;
        int leftChildData;
        cin>>leftChildData;
        if(leftChildData != -1){
            front->left = new BinaryTreeNode<int>(leftChildData);
            pendingNode.push(front->left);
        }
        
        cout<<"Enter right child data of "<<front->data<<endl;
        int rightChildData;
        cin>>rightChildData;
        if(leftChildData != -1){
            front->right = new BinaryTreeNode<int>(rightChildData);
            pendingNode.push(front->right);
        }
    }
    return root;
}

BinaryTreeNode<int>* buildTree(){
    int rootData;
    cout<<"Enter root Data "<<endl;
    cin>>rootData;
    if(rootData == -1)
        return NULL;
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}

void printTree(BinaryTreeNode<int>* root){
    if(root == NULL)
        return;
    cout<<root->data<<" ";
    printTree(root->left);
    printTree(root->right);
}
int main(){
    return 0;
}