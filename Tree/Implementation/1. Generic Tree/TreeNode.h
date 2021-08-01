#include<vector>
using namespace std;
template<typename T>

class TreeNode{
    public:
        T data;
        // By default it assumes the type of treenode to be T
        vector<TreeNode*> children; 
        // vector<TreeNode<T>*> children;
        TreeNode(int data){
            this->data = data;
        }
        ~TreeNode(){
            for(int i = 0; i < children.size(); i++){
                delete children[i];
            }
        }
};