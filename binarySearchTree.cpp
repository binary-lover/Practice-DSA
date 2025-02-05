#include <bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
    int val;
    TreeNode * left;
    TreeNode* right;

    TreeNode(int val){
        this->val=val;
        left = NULL;
        right = NULL;
    }
};

class BinarySearchTree{
    TreeNode* root;
public:
    BinarySearchTree() : root(NULL){}

    void display(){
        
    }

    bool search(TreeNode* root,int val){
        if(!root){
            return false;
        }
        if(val>root->val){
            return search(root->right, val);
        }
        else if (val < root->val){
            return search(root->left,val);
        }
        else {
            return true;
        }
    }
    bool search(int val) {
        return search(root, val);
    }
};

int main(){
    BinarySearchTree tree1;
    cout<<(tree1.search(3));
    return 0;
}