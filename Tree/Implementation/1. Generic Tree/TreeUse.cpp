#include "TreeNode.h"
#include <iostream>
using namespace std;

TreeNode<int>* buildTree(){
    int data;
    cout<<"Enter Data\n";
    cin>>data;
    TreeNode<int>* root = new TreeNode<int>(data);

    cout<<"Enter num of children of "<<data<<"\n";
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        TreeNode<int>* child = buildTree();
        root->children.push_back(child);
    }
    return root;
}
void printTree(TreeNode<int>* root){
    //edge case
    if(root == NULL)
        return;
    cout<< root->data << " : ";
    for(int i = 0; i < root->children.size(); i++){
        cout<<", "<<root->children[i]->data;
    }
    cout<<"\n";
    for(int i = 0; i < root->children.size(); i++){
        printTree(root->children[i]);
    }
}
int main(){
    // TreeNode<int>* root = new TreeNode<int>(1);
    // TreeNode<int>* child1 = new TreeNode<int>(2);
    // TreeNode<int>* child2 = new TreeNode<int>(3);
    // root->children.push_back(child1);
    // root->children.push_back(child2);
    TreeNode<int>* root = buildTree();
    printTree(root);
    // TODO delete the tree
    return 0;
}