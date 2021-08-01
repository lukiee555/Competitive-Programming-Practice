#include "TreeNode.h"
#include <iostream>
#include <queue>
using namespace std;

TreeNode<int>* buildTreeLevelWise(){
    int rootData;
    cout<<"Enter the root data "<<endl;
    cin>>rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);

    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size() != 0){
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        cout<<"Enter the num of children of "<<front->data<<endl;
        int numChild;
        cin>>numChild;
        for(int i = 0; i < numChild; i++){
            int childData;
            cout<<"Enter "<<i<<"th child of "<<front->data<<endl;
            cin>>childData;
            //Should not use static allocation of child
            //as the function finishes all the variables will be 
            //deallocated so have to allocate the child using
            //Dynamic memory allocation
            TreeNode<int>* child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
        
    } 
    return root;
}

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
int numNodes(TreeNode<int>* root){
    int ans = 1;
    for(int i = 0; i < root->children.size(); i++){
        ans+=numNodes(root->children[i]);
    }
    return ans;
}
int heightOfTree(TreeNode<int>* root){
    if(root == NULL)
        return 0;
    int maxHeightOfChildren = 0;
    for(int i = 0; i < root->children.size(); i++){
       maxHeightOfChildren = max(maxHeightOfChildren, heightOfTree(root->children[i]));
    }
    return 1 + maxHeightOfChildren;
}
void printAtLevelK(Treenode<int>* root, int k){
    if(k == 0){
        cout<<root->data<<endl;
        return;
    }
    for(int i = 0; i < root->children.size(); i++){
        printAtLevelK(root->children[i], k-1);
    }
}
int main(){
    // TreeNode<int>* root = new TreeNode<int>(1);
    // TreeNode<int>* child1 = new TreeNode<int>(2);
    // TreeNode<int>* child2 = new TreeNode<int>(3);
    // root->children.push_back(child1);
    // root->children.push_back(child2);
    // TreeNode<int>* root = buildTree();
    TreeNode<int>* root = buildTreeLevelWise();
    printTree(root);
    cout<<endl<<numNodes(root)<<endl;
    // TODO delete the tree
    return 0;
}